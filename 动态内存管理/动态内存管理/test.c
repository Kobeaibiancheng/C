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

//malloc   �ڶ�������size��С���ڴ�ռ�
//         �翪�ٳɹ�������ʼ��ַ��void*��
//         �翪��ʧ�ܣ�����NULL
//         �Լ����٣��Լ��ͷ�
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };//���ڴ��е�ջ�����ٿռ䣬���Զ��ͷ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		printf("%s", strerror(errno));
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	p[i] = i;                     //p[i] == *(p+i)
//	//}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);          //p[i] == *(p+i)
//	//}
//	free(p);
//	p = NULL;
//	return 0;
//
//}

//calloc      �ڶ������ٿռ�num��element(Ԫ��)��ÿһ��element�Ĵ�СΪsize���ֽ�
//            �����ٳɹ�������ʼ��ַ��void*����������ʧ�ܷ���NULL
//            �Լ����٣��Լ��ͷ�
//int main()
//{
//	char* p = (char*)calloc(10, sizeof(char));
//	int i = 0;
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//realloc      void* realloc(void* ptr, size_t size)
//             1.ptr��Ҫ�������ڴ��ַ
//             2.size�ǵ������µĴ�С���ֽڣ�
//             3.����ֵ�ǵ������µ��ڴ���ʼ��ַ
//             4.realloc����ԭ�ڴ�Ŀռ��С�Ļ����ϣ����Ὣԭ�ڴ�������ƶ����µĿռ�
//             5.�ڵ����ڴ�ʱ�����������
//               *ԭ�пռ�����㹻�ռ�
//                Ҫ��չ�ڴ��ֱ��ԭ���ڴ�֮��ֱ��׷�ӿռ䣬ԭ���ռ�����ݲ������仯
//               *ԭ�пռ��û���㹻�Ŀռ�
//                ԭ�пռ�֮��û���㹻��Ŀռ�ʱ����չ�ķ����ǣ�
//                �ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�ã������������ص���һ���µ��ڴ��ַ��

//int main()
//{
//	int* ptr =(int*)malloc(100);
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int* p = (int*)realloc(ptr, 100);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	ptr = p;
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

//    �����Ķ�̬�ڴ����

//1.��NULLָ��Ľ����ò���
void test()
{
	int* p = (int*)malloc(INT_MAX / 4);
	*p = 20;
	free(p);
	p = NULL;
}

//2.�Զ�̬���ٿռ��Խ�����
void test()
{
	int i = 0;
	char* p = (char*)malloc(10 * sizeof(char));
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = 'x'; //��i = 10ʱԽ�����
	}
	free(p);
	p = NULL;

}
