#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//void * memmove(void * destination, const void * source, size_t num);
//和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的。 
//如果源空间和目标空间出现重叠，就得使用memmove函数处理。

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if(dest<src)
//	{
//		//
//		while(count--)
//		{
//			*(char*)dest = *(char*)src;
//			((char*)src)++;
//			((char*)dest)++;
//		}
//	}
//	else
//	{
//		//
//		while(count--)
//		{
//			*((char*)dest+count) = *((char*)src+count);
//		}
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	my_memmove(arr1, arr1+2, 16);
//
//	return 0;
//}