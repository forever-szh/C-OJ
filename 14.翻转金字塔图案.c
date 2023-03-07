#define _CRT_SECURE_NO_WARNINGS 1

//14.翻转金字塔图案
//https://www.nowcoder.com/practice/c4775776e4464537bfb6a5ba37c596c6?tpId=107&&tqId=33343&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include<stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			//打印一行
			//先打印空格
			int j = 0;
			for (j = 0; j < i; j++)//j<i  i j n三者之间找关系 
			{
				printf(" ");
			}
			for (j = 0; j < n - i; j++)//n-i
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}