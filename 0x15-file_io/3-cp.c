#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char **argv)
{
	char *buff[1024];
	int file_from, file_to, fileRead;
		
	if(argc < 3)
	{
		dprint();
		exit(97);
	}
	file_from = open(argv[1], 0002);
	file_to = open(argv[2], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if(file_to == -1)
	{
		file_to = open(argv[2], O_TRUNC);
	}
	if(file_from != -1)
	{
		while((fileRead = read(file_from, buff, 1024)) > 0)
		{
			if(write(file_to, buff,fileRead) < 0)
				dprint();
				exit(99);
		}
	}
	else
	{
		exit(98);				
		dprint("Error: Can't read from file NAME_OF_THE_FILE");
	}
	if(close(file_from) < 0)
	{
		exit(100);
		dprint("Error: Can't close fd FD_VALUE");
	}
	if(close(file_to))
	{
		exit(100);
		dprintf("Error: Can't close fd FD_VALUE");
	}
}

