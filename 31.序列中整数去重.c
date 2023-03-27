#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/6564a2f6e70f4153ad1ffd58b2b28490?tpId=107&&tqId=33380&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//31.序列中整数去重

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[1000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		//判断arr[i]是否在后边出现
		int j = 0;
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				//后边元素往前覆盖
				int k = 0;
				for (k = j; k < n - 1; k++)//k<n的话会越界 
				{
					arr[k] = arr[k + 1];
				}
				n--;
				j--;//防止多个数 有可能后面还有一样的
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}