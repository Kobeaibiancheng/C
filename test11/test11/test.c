#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int Port()
//{
//	int a = 1;
//	//char* pa = (char*)&a;
//	//if (1 == *pa)
//	//	return 1;
//	//else
//	//	return 0;
//	return *(char*)&a;//��ȡa�ĵ�ַ��int*�����Է����ĸ��ֽڣ�
//	                 //��ǿ��ת��Ϊchar*, �������ã�*������һ���ֽ�
//}
//int main()
//{
//	//int a = 0x11223344;
//	if (1 == Port())
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}

#include<assert.h>
//int MyStrlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = MyStrlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

char* MyStrcpy(char* dest, const char* str)
{
	char* arr = dest;
	assert(dest != NULL);
	assert(str != NULL);
	//while (*str != '\0')
	//{
	//	*dest = *str;
	//	dest++;
	//	str++;
	//}
	//*dest = *str;
	//return arr;
	while (*dest++ = *str++)  //�Ƚ����ã�Ȼ��ֵ����++��
	{                        //ֱ����'\0'��ֵ��'\0'��ASCIIֵ��0��ѭ������
		;
	}
	return arr;
}
int main()
{
	char arr1[10] = { 0 };
	char arr2[] = "hello";
	printf("%s\n", MyStrcpy(arr1, arr2));
	return 0;
}