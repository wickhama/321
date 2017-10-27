/*
	Shell Lab4
	CPSC 321
	Ayla Wickham, 230111051
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {

	char *args[2] = {".", NULL};
	execvp("ls", args);
	
	return 0;
}
