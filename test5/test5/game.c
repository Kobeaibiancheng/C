#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************ 1.play***********\n");
	printf("************ 0.exit***********\n");
	printf("******************************\n");
}

void game()
{
	int num = 0;
	int ret = rand() % 100 + 1;
	/*printf("%d\n", ret);*/
	printf("��Ϸ��ʼ,����1-100�����֣�\n");
	while (1)
	{
		scanf("%d", &num);
		if (num > ret)
			printf("�´���\n");
		else if (num < ret)
			printf("��С��\n");
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}

int binary_search(int* ptr, int k, int sz)
{
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (ptr[mid] > k)
			right = mid - 1;
		else if (ptr[mid] < k)
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}