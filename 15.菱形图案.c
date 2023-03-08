#define _CRT_SECURE_NO_WARNINGS 1



//https://www.nowcoder.com/practice/8b935f8ffe99445dbd42494febd13e45?tpId=107&&tqId=33344&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//15.菱形图案

#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		for (i = 0; i < n; i++)
		{
			int j = 0;
			for (j = 0; j < n - i; j++)//n-i
			{
				printf(" ");
			}
			for (j = 0; j <= i; j++)//i
			{
				printf("* ");
			}
			printf("\n");
		}
		for (i = 0; i < n + 1; i++)
		{
			int j = 0;
			for (j = 0; j < i; j++)//i
			{
				printf(" ");
			}
			for (j = 0; j < n + 1 - i; j++)//n+1-i
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}