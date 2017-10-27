/*
	CPSC 321, Lab 4 Assignment
	October 6, 2015
	Ayla Wickham 230111051
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


typedef enum { false, true} bool;

int main(void) {

	char *args[60];
	char str[60];
	pid_t pid;
	bool background;
	int i;
	
	while(fgets(str, sizeof str, stdin) != NULL) {
		background = false;
		i=0;

		args[i] = strtok(str," \t\r\n\f\v");
	
		while(args[i] != NULL){
			args[++i] = strtok(NULL, " \t\r\n\f\v");
		}
	
		if(strcmp(args[i-1], "&") == 0) {
			background = true;
			args[i-1] = NULL;
		}
	
		pid=fork();

		if(pid==0) {
			if(background) {setpgid(0, 0);}
			execvp(args[0], args);
			return 0;
		}
	}	

	return 0;
}
