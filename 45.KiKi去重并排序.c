#define _CRT_SECURE_NO_WARNINGS 1


//https://www.nowcoder.com/practice/f59b914172b94c69a2b29ad0a1d9b1a7?tpId=107&&tqId=33417&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//45.KiKi去重整数并排序

#include<stdio.h>
//暴力求解 
int main()
{
	int n = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	//接受n个数字
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//处理
	//1排序 冒泡排序
	//2去重 两两相邻比较 覆盖前面的
	//3打印
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//去重比较的对数
	for (i = 0; i < n - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			//把i+1下标往后的元素全部往前覆盖
			int k = 0;//i下标后面的全部覆盖
			for (k = i; k < n - 1; k++)
			{
				arr[k] = arr[k + 1];
			}
			n--;//挪一下少一个元素
			i--;//n减去了1 i也对应减1 才能相邻比较
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

int main()
{
	int n = 0;
	int arr[1001] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int m = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		arr[m] = m;
	}
	for (i = 0; i <= 1000; i++)//n个数字 但最后要全部走一遍 因为有可能就2个元素 但是有1000这个数 
	{
		if (arr[i] != 0)
		{
			printf("%d ", arr[i]);
		}
	}
	return 0;
}