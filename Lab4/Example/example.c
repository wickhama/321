/*
	CPSC 321 Assignment 1 Shell
	example.c
	October 6, 2017
*/

#include <stdio.h>
#include <unistd.h>

int main(void) {
	char *args[2] = {".", NULL};
	pid_t pid = fork();

	if(pid == 0) {
		puts("\n");

		execv("/bin/ls", args);

	}
	puts("\n");

	return 0;
}
