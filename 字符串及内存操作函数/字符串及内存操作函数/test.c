#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>


//strlen����
//size_t strlen(const char* str)
//1.�ַ�����'\0'��Ϊ������־��strlen�������ص����ַ���'\0'ǰ���ֵ��ַ�����(������'\0')
//2.����ָ����ַ���������'\0'����
//3.ע�⺯���ķ���������size_t�����޷��ŵ�(�״�)

//int MyStrlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//
//
//	//if (*str == '\0')
//	//	return 0;
//	//else
//	//{
//	//	return 1 + MyStrlen(str + 1);
//	//}
//
//
//	/*char* start = str;
//	while (*str++)
//	{
//		;
//	}
//	return str - start - 1;*/
//}
//int main()
//{
//	char* p = "hello world";
//	//int ret = strlen(p);
//	int ret = MyStrlen(p);
//	printf("%d\n", ret);
//	//const char* str1 = "abcdef";
//	//const char* str2 = "bbb";
//	//if (strlen(str2) - strlen(str1)>0) 
//	//{ 
//	//	printf("str2>str1\n");
//	//}
//	//else  
//	//{ 
//	//	printf("srt1>str2\n");
//	//}
//	return 0;
//}





//strcpy����
//char* strcpy(char * destination, const char * source )
//                  Ŀ���ַ���           Դ�ַ���
//1.Դ�ַ�����'\0'��Ϊ������־
//2.�����»ὫԴ�ַ����е�'\0'Ҳ������Ŀ���ַ���
//3.Ŀ��ռ�����㹻����ȷ���ܹ����Դ�ַ���
//4.Ŀ��ռ����ɱ�(������const����Ŀ���ַ���)


//char* MyStrcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello world";
//	//strcpy(arr1, arr2);
//	MyStrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat����(�ַ���׷�Ӻ���)
//char* strcat ( char* destination, const char* source )
//                    Ŀ���ַ���      ׷��(Դ)�ַ���
//1.׷��(Դ)�ַ���������'\0'����
//2.Ŀ��ռ�����㹻���ܹ�׷����Դ�ַ���
//3.Ŀ��ռ������޸�
//4.


int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}