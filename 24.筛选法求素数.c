#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/06c3dcc303654ef4926654023eca1e5a?tpId=107&&tqId=33359&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//24.筛选法求素数

#include <stdio.h>
int main()
{
	int n=0;
	while(~scanf("%d",&n))
	{
		//int arr[n+1];
		int arr[101];
		int i=0;
		for(i=2;i<=n;i++)
		{
			arr[i]=i;
		}
		int j=0;
		for(j=2;j<=n;j++)
		{
			int k=0;
			for(k=j+1;k<=n;k++)
			{
				if(arr[k]%j==0)
				{
					arr[k]=0;
				}
			}
		}
		int count=0;
		for(i=2;i<=n;i++)
		{
			if(arr[i]!=0)
			printf("%d ",arr[i]);
			else
			count++;
		}
		printf("\n%d\n",count);
	}
	return 0;
}
