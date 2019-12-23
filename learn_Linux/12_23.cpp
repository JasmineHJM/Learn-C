#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> 
#include <string.h>
//写文件
int main() 
{
	FILE *fp = fopen("myfile", "w"); 
	if (!fp)
	{ 
		printf("fopen error!\n"); 
	}

	const char *msg = "hello bit!\n";   
	int count = 5;  
	while (count--)
	{ 
		fwrite(msg, strlen(msg), 1, fp);
	}
	fclose(fp);

	return 0;
}

//读文件
int main() 
{
	FILE *fp = fopen("myfile", "r");   
	if (!fp)
	{
		printf("fopen error!\n");
	}

	char buf[1024];  
	const char *msg = "hello bit!\n";
	while (1)
	{       
		size_t s = fread(buf, 1, strlen(msg), fp);     
		if(s > 0)
		{     
			buf[s] = 0;      
			printf("%s", buf);   
		}     
		if(feof(fp))
		{        
			break;   
		}  
	}

		fclose(fp);  
		return 0;
	}