/* 
	CPSC 321, September 25, 2017
	challange.c
	Ayla Wickham, 230111051
*/

#include <stdio.h>
#include <unistd.h>


int main() {

	int var;

	var = 0;

	pid = fork();

	if(pid == 0) {
		printf("Child var: %d\n", var);
		*var = 3;
	} else {
		printf("Parent var: %d\n", var);
		*var = 7;
	}
	
	while(1) {}

	return 0;
}
