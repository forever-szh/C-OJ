#define _CRT_SECURE_NO_WARNINGS 1


//https://www.nowcoder.com/practice/ec44d4ff8c794b2f9205bdddbde96817?tpId=107&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking&difficulty=&judgeStatus=&tags=&title=&sourceUrl=&gioEnter=menu
//37.矩阵交换
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int k = 0;
	scanf("%d", &k);
	char t = 0;
	int a = 0;
	int b = 0;
	for (i = 0; i < k; i++)
	{
		//每一次操作的过程
		scanf(" %c %d %d", &t, &a, &b);//%c前空格消耗回车 
		if (t == 'r')//交换行 
		{
			//每一列交换
			for (j = 0; j < m; j++)
			{
				int tmp = arr[a - 1][j];
				arr[a - 1][j] = arr[b - 1][j];
				arr[b - 1][j] = tmp;
			}
		}
		else if (t == 'c')//交换列 
		{
			//每一行交换
			for (j = 0; j < n; j++)
			{
				int tmp = arr[j][a - 1];
				arr[j][a - 1] = arr[j][b - 1];
				arr[j][b - 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}