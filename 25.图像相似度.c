#define _CRT_SECURE_NO_WARNINGS 1


//25.ÕºœÒœ‡À∆∂»
//https://www.nowcoder.com/practice/f2952ee3bb5c48a9be6c261e29dd1092?tpId=107&&tqId=33360&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int arr1[100][100] = { 0 };
	int arr2[100][100] = { 0 };
	scanf("%d %d", &m, &n);
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				count++;
			}
		}
	}
	printf("%.2lf\n", 100.0 * count / (m * n));
	return 0;
}