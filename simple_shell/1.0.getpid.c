#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int process;

	process = fork();
	if(process == 0)
	{
		printf("\n%d\n",getpid());
		printf("\n%d\n",getppid());
	}
	return(0);
}
