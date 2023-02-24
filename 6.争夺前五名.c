#define _CRT_SECURE_NO_WARNINGS 1

//6.争夺前五名
//https://www.nowcoder.com/practice/cd052308a1c44a88ad00255f312c3e14?tpId=107&&tqId=33320&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

//冒泡排序
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[40] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//排序
	//自己实现排序-冒泡排序 两两相邻元素比较并且交换
	for (i = 0; i < n - 1; i++)//趟数
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
	for (i = n - 1; i >= n - 5; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
