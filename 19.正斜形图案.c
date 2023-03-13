#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/61ef68d129534dfbb04b232e1244e447?tpId=107&&tqId=33348&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//19.正斜形图案

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
				if (i + j == n - 1)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}