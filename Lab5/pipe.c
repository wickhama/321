/*
	CPSC321
	pipe.c
	Ayla Wickham, 230111051
	October 20, 2017
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

#define MAXBUFF 512

int main(char *args) {

	pid_t pid;

	int fd[2];
	int length;
	char * buff[MAXBUFF];

	if(pipe(fd) < 0) {
		puts("Error creating pipe.\n");
	}

	pid = fork();	
	
	if(pid > 0) {
		close(fd[0]);
		write(fd[1], "hello CPSC321,\n", 15);
		write(fd[1], "This is a\n", 10);
		write(fd[1], "Linux pipe!", 11); 
	}
	else if(pid ==0) {
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		
		char *args[3] = {"grep", "Linux", NULL}; 
		execvp(args[0], args);
	}
	else puts("Error in forking");
	
	return 0;
}
