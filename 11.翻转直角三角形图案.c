#define _CRT_SECURE_NO_WARNINGS 1

//11.翻转直角三角形图案
//https://www.nowcoder.com/practice/2cdea429fa414fbba26e6c821724ca06?tpId=107&&tqId=33340&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int i = 0;
		//行数 
		for (i = 0; i < n; i++)
		{
			//打印一行
			int j = 0;
			for (j = 0; j < n - i; j++)//j<n-i n=5 i=0 n=5 i=1
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}·