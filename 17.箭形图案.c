#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/7b066963c4eb4d188becd18c37dfe22d?tpId=107&&tqId=33347&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//17.箭形图案

#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n - i; j++)
			{
				printf("  ");
			}
			for (j = 0; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < i; j++)
			{
				printf("  ");
			}
			for (j = 0; j < n + 1 - i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
