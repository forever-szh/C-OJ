#define _CRT_SECURE_NO_WARNINGS 1


//https://www.nowcoder.com/practice/7b066963c4eb4d188becd18c37dfe22d?tpId=107&&tqId=33347&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//18.反斜形图案

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
			for (j = 0; j < n; j++)
			{
				if (i == j)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}