#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//void * memcpy(void * destination, const void * source, size_t num);
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//������������� '\0' ��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ�����

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	void*ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(count--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)src)++;
//		((char*)dest)++;
//	}
//	
//	return ret;
//}
//
//
//int main()
//{
//	int arr1[10] = {0};
//	int arr2[] = {1,2,3};
//	my_memcpy(arr1, arr2, 12);
//	//dest-src > count
//	//			1,2,1,2,3,4,7,8,9,10
//	my_memcpy(arr1+2, arr1, 16);
//
//	return 0;
//}
