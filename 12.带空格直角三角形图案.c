#define _CRT_SECURE_NO_WARNINGS 1

//12.带空格直角三角形图案
//https://www.nowcoder.com/practice/192d1039c3d44155bb868073f5482670?tpId=107&&tqId=33341&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include<stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		//行数 
		for (i = 0; i < n; i++)
		{
			//打印一行 空格+* 两个空格看成一组 * 打印 
			int j = 0;
			for (j = 0; j < n - 1 - i; j++)
			{
				printf("  ");
			}
			for (j = 0; j <= i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int n=0;
//	while(~scanf("%d",&n))
//	{
//		int i=0;
//		for(i=0;i<n;i++)
//		{
//			int j = 0;
//			for(j=0;j<n;j++)
//			{
//				if(i+j<n-1)
//				printf("  ");
//				else
//				printf("* ");
//			}
//		}
//	}
//}