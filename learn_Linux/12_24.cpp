#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h> 
#include <fcntl.h>
#include <unistd.h> 
#include <string.h>
/*
int main()
{
	umask(0);
	int fd = open("myfile", O_WRONLY | O_CREAT, 0644);
	if (fd < 0){
		perror("open");
		return 1;
	}

	int count = 5;
	const char *msg = "hello bit!\n";
	int len = strlen(msg);

	while (count--)
	{
		write(fd, msg, len);
		//fd: ���潲�� msg���������׵�ַ�� len: ���ζ�ȡ������д����ٸ��ֽ� �����ݡ� ����ֵ��ʵ��д�˶����ֽ�����    
	}

	close(fd);
	return 0;
}
*/
int main()
{
	int fd = open("myfile", O_RDONLY);
	if (fd < 0){
		perror("open");
		return 1;
	}

	const char *msg = "hello bit!\n";
	char buf[1024];
	while (1)
	{
		size_t s = read(fd, buf, strlen(msg));//���write    
		if (s > 0)
		{
			printf("%s", buf);
		}
		else
		{
			break;
		}
	}

	close(fd);
	return 0;
}
