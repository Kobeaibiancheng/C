#define _CRT_SECURE_NO_WARNINGS 1


//malloc
//calloc
//realloc
//�������������ٵĿռ����ڴ��еĶ���
//ʹ�ù����Լ������Լ��ͷ�
//free���������ͷ��ڴ�

#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };//���ڴ��е�ջ�����ٿռ䣬���Զ��ͷ�
	int* p = (int*)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		printf("%s", strerror(errno));
	}
	for (i = 0; i < 10; i++)
	{
		*(p+i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p+i));
	}
	//for (i = 0; i < 10; i++)
	//{
	//	p[i] = i;                     //p[i] == *(p+i)
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", p[i]);          //p[i] == *(p+i)
	//}
	free(p);
	p = NULL;
	return 0;

}