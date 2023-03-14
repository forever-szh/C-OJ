#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/83d6afe3018e44539c51265165806ee4?tpId=107&&tqId=33349&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//20.X形图案

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
				else if (i + j == n - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
