/*
	CPSC 321
	October 6, 2015
	Ayla Wickham 230111051
*/

#include <stdio.h>
#include <unistd.h>


int main(void) {

	char cmmd[60];
	char *dir = "/bin/";
	
	while(fgets(cmmd, 60, stdin) != NULL){
	
		pid_t pid = fork();
		if(pid == 0) {
			execv("/bin/", cmmd); Fix execv! /bin/ is the file in os that executes the command. cmmd is where you use options and args!
		}
		else {
			wait();
		}
	} puts("Hello");
	return 0;
}
