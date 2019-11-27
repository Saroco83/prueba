#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */
int main ()
{
	int pid;
	switch(pid = fork())
	{
		case 0: printf("Proceso hijo %d padre %d\n", getpid(),getppid());
		case 1: printf("Error\n");exit(1);
		default: printf("Proceso padre %d mi padre %d\n",getpid(),getppid());
	}
}
