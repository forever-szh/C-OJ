#define _CRT_SECURE_NO_WARNINGS 1

//21.空心正方形图案
//https://www.nowcoder.com/practice/72347ee949dc47399186ee183632f303?tpId=107&&tqId=33350&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
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
				if (i == 0 || i == n - 1)
					printf("* ");
				else if (j == 0 || j == n - 1)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}
	return 0;
}
