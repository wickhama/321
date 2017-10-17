/*
	CPSC321 Forking processes
	Ayla Wickham 230111051
	September 15, 2017
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid;
	int count;

	count = 0;
	pid = fork();

	for (;count<50; ++count)
	{
		switch(pid)
		{
			case -1 :
				printf("Fork failed");
				return 1;
			break;
			case 0 :
				printf("child : count = %d\n", count);
			break;
			default :
				printf("Parent : count = %d\n", count);
		}
	}
	return 0;
}
