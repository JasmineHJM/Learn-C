#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <fcntl.h> 
#include <stdlib.h>

int main()
{
	close(1);
	int fd = open("myfile", O_WRONLY | O_CREAT, 00644);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	printf("fd: %d\n", fd);
	fflush(stdout);
	close(fd);
	exit(0);
}
/*
int main()
{
	int fd = open("./log", O_CREAT | O_RDWR);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	close(1);
	dup2(fd, 1);
	for (;;)
	{
		char buf[1024] = { 0 };
		size_t read_size = read(0, buf, sizeof(buf)-1);
		if (read_size < 0)
		{
			perror("read");
			break;
		}
		printf("%s", buf);
		fflush(stdout);
	}
	return 0;
}
*/