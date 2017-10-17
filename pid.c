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
	int sin;

	pid = fork();

	if (pid==0)
	{
		pid = fork();
		if (pid==0)
		{
			printf("Child of child pid = %d\n", getpid());
		}
		else
		{
			printf("Child pid = %d\n", getpid());
		}
	}
	else
	{
		printf("Parent pid = %d\n", getpid());
	}

	//Loop forever so we can observe processes within the process tree.
	while(1)
	{
	}
	
	return 0;
}
