/*
	CPSC 321, Assignment 2
	November 29, 2017
	Ayla Wickham 230111051
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

#define MAXBUFF 512

typedef enum { false, true} bool;

int main(void) {

	char *programs[60];
	char *args[60];
	char str[60];
    char *buff[MAXBUFF];
	pid_t pid;
	bool background;
	int i, program_counter, length, fd[2];
 
    

	while(fgets(str, sizeof str, stdin) != NULL) {
		background = false;
		program_counter=0;
        
        //Open pipes for piping programs
    	if(pipe(fd) < 0) {
            printf("Error: can't pipe '|'");
        }

		//Split into programs if needed
		programs[program_counter] = strtok(str, "|");
		while(programs[program_counter] != NULL) {
			programs[++program_counter] = strtok(NULL, "|");
		}

		program_counter = 0;	//reset to go through each program
		while(programs[program_counter] != NULL) {
			i = 0;
	
			args[i] = strtok(programs[program_counter++]," \t\r\n\f\v");
	
			while(args[i] != NULL){
				args[++i] = strtok(NULL, " \t\r\n\f\v");
			}
	
			if(strcmp(args[i-1], "&") == 0) {
				background = true;
				args[i-1] = NULL;
			}
	
        	if(strcmp(args[0], "cd") == 0) {
            	chdir(args[1]);
        	}

		    pid=fork();

            if(pid < 0) {
                printf("Error with forking");
            }
		    else if(pid==0) {
			    if(background) {setpgid(0, 0);}
                
                dup2(fd[0], 0);

                //If it's not the last program to be piped to then change the output to write to pipe (fd[1]).
                if(programs[program_counter] != NULL) {
                    dup2(fd[1], 1);
                }
                else {
                    close(fd[0]);
                    close(fd[1]);
                }
			    execvp(args[0], args);
                
			    exit(0);
		    }
        }
    }	

	return 0;
}
