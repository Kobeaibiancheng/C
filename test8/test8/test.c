#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int Fun(int n, int k)
{
	if (1 == n)
		return 1;
	else if (0 == n)
		return 0;
	else if (1 == k)
		return n;
	else
		return n*Fun(n, k - 1);
}
int main()
{
	int n = 2;
	int k = 3;
	int ret = Fun(n, k);
	printf("%d\n", ret);
	return 0;
}

�ݹ�ʵ�����n��쳲�������
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{
	int n = 4;
  scanf("%d",&n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

�ǵݹ�ʵ�����n��쳲�������
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)//��n����2��ʱ�򣬿�ʼִ��ѭ��,��һ��ʼû�н���while ֱ�ӷ���c(c = 1)
	{
		c = a + b;
		a = b;//1 1 2 3 5 8 13
		b = c;//  a+b=c
		n--;//      a+b=c
		//            a+b=c
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;//1 1 2 3 5
}


int DigitSum(int n)
{
	if (n > 9)
	{
		return n%10 + DigitSum(n/10);
	}
	else
		return n;
}
int main()
{
	int n = 1729;
	int ret = DigitSum(n);
	printf("%d\n", ret);
	return 0;
}

void reverse_string(char* str)
{
	if (*str != '\0')
	{
		reverse_string(str + 1);
		printf("%c", *str);
	}
}
int main()
{
	char arr[] = "hello";
	reverse_string(arr);
	return 0;
}


�ݹ�ʵ��strlen
int MyStrlen(char* str)
{
	if ('\0' == *str)
		return 0;
	else
	{
		return 1 + MyStrlen(str + 1);
	}
}
int main()
{
	char arr[] = "hello";
	int ret = MyStrlen(arr);
	printf("%d\n", ret);
	return 0;
}

�ǵݹ�ʵ��strlen����һ
int MyStrlen(char* str)
{
	char* end = str;
	while ('\0' != *str)
	{
		str++;
	}
	return str - end;//����ָ��ͬһ��ռ��ָ�룬����ָ�����==| Ԫ�ظ��� |
}
int main()
{
	char arr[] = "hello";
	int ret = MyStrlen(arr);
	printf("%d\n", ret);
	return 0;
}

�ǵݹ�ʵ��strlen������
int MyStrlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "hello world";
	int ret = MyStrlen(arr);
	printf("%d\n", ret);
	return 0;
}

�ݹ�ʵ����n�Ľ׳�
int Fun(int n)
{
	if (n > 1)
		return n*Fun(n - 1);
	else
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fun(n);
	printf("%d\n", ret);
	return 0;
}

�ǵݹ�ʵ����n�Ľ׳�
int main()
{
	int n = 0;
	int ret = 1;
	int i = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d\n", ret);
	return 0;
}

�ݹ�ʵ�ִ�ӡһ��������ÿһλ
void Print(n)
{
	if (n > 9)
	{
		Print(n / 10);
		printf("%d ", n % 10);
	}
	else
		printf("%d ", n);
}
int main()
{
	int n = 2345;
	Print(n);
	return 0;
}

int main()
{
	printf("%d\n", sizeof(int));
	return 0;
}