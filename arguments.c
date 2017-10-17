/*
	CPSC 321 Command line arguments
	Ayla Wickham 230111051
	September 15, 2017
*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	printf("\n");
	
	//argc contains the number of arguments passed in.
	printf("argc : %d \n", argc);
	
	//argv[0] contains the first argument, the program name.
	printf("argv[0] : %s \n", argv[0]);

	//print the remainder of the arguments.
	for (int i=1; i<argc; ++i)
	{
		printf("argv[%d] : %s \n", i, argv[i]);
	}

	printf("\n");

	return 0;
}
