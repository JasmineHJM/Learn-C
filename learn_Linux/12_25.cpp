﻿#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <fcntl.h> 
#include <string.h>

int main() 
{
	char buf[1024];  
	size_t s = read(0, buf, sizeof(buf));  
	if (s > 0){ buf[s] = 0;     
	write(1, buf, strlen(buf));    
	write(2, buf, strlen(buf));
	}  
	return 0;
}
/*
int main()
{
	int fd = open("myfile", O_RDONLY);  
	if (fd < 0)
	{ 
		perror("open");    
		return 1; 
	}  
	printf("fd: %d\n", fd);

	close(fd);
	return 0;
}

int main()
{
	close(0);
	//close(2);   
	int fd = open("myfile", O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	printf("fd: %d\n", fd);

	close(fd);
	return 0;
}

*/