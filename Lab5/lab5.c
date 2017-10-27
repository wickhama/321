/*	
	CPSC 321, Lab5
	lab5.c
	October 20, 2017
*/

#include <stdio.h>
#include <unistd.h>

#define MAXBUFF 512

int main(int argc, const char *argv[]) {

	//A two element integer array is used for the pipe file descriptiors.
	//The pip() command returns a negative number on failure.
	int fd[2];

	//Length of read operation
	int length;

	//Process id
	pid_t pid;

	//Line buffer array of length MAXXBUFF
	char * buff[MAXBUFF];

	if(pipe(fd) < 0) {
		puts("error creating pipe.\n");
	}

	pid = fork();

	if(pid > 0) {
		//Parent will not need the read pipe attached to the child.
		close(fd[0]);
		//Write 37 charachter to fd[1] which is the write pipe.
		write(fd[1], "Hello CPSC321 this is a Linux pipe!\n", 37);
	}
	
	else if(pid == 0) {
		//Child will not need the write pipe attached to the parent.
		close(fd[1]);

		//Read from the parent write pipe.
		//read returns the number of characters read.
		length = read(fd[0], buff, MAXBUFF);

		//Write the buffer to stdout so we can see that it worked.
		write(STDOUT_FILENO, buff, length);
	}
	else {
		puts("fork() error.\n");
	}
	
	return 0;
}
