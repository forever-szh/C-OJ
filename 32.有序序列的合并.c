#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/a9e943b0dab142759807d0cfb6863897?tpId=107&&tqId=33381&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//32.有序序列的合并

#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int arr1[100] = { 0 };
	int arr2[100] = { 0 };
	int arr3[200] = { 0 };
	scanf("%d %d", &n, &m);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	i = 0;
	int j = 0;
	int k = 0;
	while (i < n && i < m)//给第三个数组 比较进行赋值 或者直接打印 1 2 数组 
	{
		if (arr1[i] < arr2[j])//1 和 2比较后赋值存 
		{
			arr3[k++] = arr1[i++];
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	if (i == n)//1先存完 
	{
		//不写条件会延续上面的j
		for (; j < m; j++)//2剩下直接存 
		{
			arr3[k++] = arr2[j];
		}
	}
	else
	{
		for (; i < n; i++)
		{
			arr3[k++] = arr1[i];
		}
	}
	for (i = 0; i < k; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}
