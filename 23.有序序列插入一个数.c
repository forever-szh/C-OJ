#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/74486aec6fe14d44b509efabf265ee66?tpId=107&&tqId=33358&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//23.有序序列插入一个数

#include<stdio.h>
int main()
{
	int n = 0;
	int arr[51] = { 0 };
	int m = 0;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (i = n - 1; i >= 0; i--)//从后往前 比较 
	{
		if (arr[i] > m)
		{
			arr[i + 1] = arr[i];//往后拿一个 
		}
		else
		{
			arr[i + 1] = m;
			break;
		}
	}
	if (i < 0)//比所有元素都小 
	{
		arr[0] = m;
	}
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}