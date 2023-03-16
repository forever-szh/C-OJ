#define _CRT_SECURE_NO_WARNINGS 1

//22.空心三角形图案
//https://www.nowcoder.com/practice/2ccc5fca423e47f0b622fe6f151cfab4?tpId=107&&tqId=33351&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

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
				if (i == n - 1 || j == 0 || i == j)//选择行列打印*  
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}