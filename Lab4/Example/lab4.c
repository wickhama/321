/*	
	CPSC321 Lab4 extension
	lab4.c
	October 13, 2017
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, const char *argv[]) {
	//Thisstring is used for the execv call below
	//The "." representes the current working directory
	char *args[2] = {".", NULL};
	
	//Choose a directory other than where lab4 is located
	char * dir = "/bin";

	pid_t pid = fork();
	
	if(pid == 0) {
		//chdir() is used to change the current working directory of a process
		chdir(dir);
	
		puts("\n***** Child *****\n");

		//This exec of 'ls' will display the contents of the "/bin" folder
		execv("/bin/ls", args);
	}
	else if(pid > 0) {
		sleep(1);
		chdir(getenv("HOME"));

		puts("\n***** Parent *****\n");
		//This exec of 'ls' will display the contents of your home directory
		execv("/bin/ls", args);
	}
	else {
		puts("Error! Failed to fork");
		exit(1);
	}
	return 0;
}
