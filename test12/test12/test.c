#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int average = a + (a - b) / 2;
//	printf("%d\n", average);
//	return 0;
//}

//int main()
//{
//	int arr[9] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int k = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		k ^= arr[i]; //001
//		            //100
//	}
//	printf("%d\n", k);
//	return 0;
//}

//ָ����ʶ��������Ԫ��,�β��� ָ������
//void Print(int(*parr)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//parrָ������д��arr[3][5]��һ�еĵ�ַ��parr+i��ʾ��i�еĵ�ַ
//			//*(parr+i)���ʵ�i�е����ݣ�(*(parr+i)+j)���ʵ�i�е�j�е�Ԫ��
//			printf("%d ", *((*parr+i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7 };
//	Print(arr, 3, 5);
//	return 0;
//}

//���ʶ������飬�ö����������
//void Print(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7 };
//	Print(arr, 3, 5);
//	return 0;
//}
//void Print(char (*parr)[7])
//{
//	printf("%s\n", parr);
//}
//int main()
//{
//	char arr[] = "abcedf";
//	Print(&arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int (*p)[10] = &arr;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", (*p)[i]);
	////}
	//int* p = arr;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
//	return 0;
//}