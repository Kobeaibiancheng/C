#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

//�ݹ�ʵ��n�Ľ׳�
//int Fac(int n)
//{
//	if (n > 1)
//		return n * Fac(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}

//�ǵݹ�ʵ��n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//}


//void Print(int a)
//{
//	if (a > 9)
//		Print(a/10);
//	printf("%d ", a%10);
//}
//
//int main()
//{
//	int a = 1234;
//	Print(a);
//	return 0;
//}

//int MyStrlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "weclome to ALI";
//	int ret = MyStrlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//int MyStrlen(char* str)
//{
//	char* point = str;
//	while (*str != '\0')
//		str++;
//	return str - point;
//}
//int main()
//{
//	char arr[] = "weclome to ALI";
//	int ret = MyStrlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


//�ݹ�ʵ��strlen����
//int MyStrlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + MyStrlen(str + 1);
//	return 0;
//}
//int main()
//{
//	char arr[] = "weclome to ALI";
//	int ret = MyStrlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
