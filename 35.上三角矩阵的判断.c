#define _CRT_SECURE_NO_WARNINGS 1

//35.上三角矩阵的判断
//https://www.nowcoder.com/practice/f5a29bacfc514e5a935723857e1245e4?tpId=107&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking&difficulty=&judgeStatus=&tags=&title=&sourceUrl=&gioEnter=menu

#include<stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int arr[1000][1000];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i > j)//i j关系 
			{
				if (arr[i][j] != 0)
				{
					printf("NO");
					return 0;
				}
			}
		}
	}
	printf("YES");
	return 0;
}