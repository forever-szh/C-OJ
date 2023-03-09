#define _CRT_SECURE_NO_WARNINGS 1


//16.K形图案
//https://www.nowcoder.com/practice/753cc2662d9949fe826a85f815db0ca4?tpId=107&&tqId=33345&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

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
			for (j = 0; j < n + 1 - i; j++)//n+1-i
			{
				printf("* ");
			}
			for (j = 0; j < i; j++)//i
			{
				printf(" ");
			}
			printf("\n");
		}
		for (i = 0; i < n + 1; i++)
		{
			int j = 0;
			for (j = 0; j <= i; j++)//i
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}