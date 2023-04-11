#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/242eafef2a704c0ca130d563b7b3ee2d?tpId=107&&tqId=33392&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//40.小乐乐与进制转换

#include<stdio.h>//m进制 %n /n可以拿出每一位 
int main()
{
	int n = 0;
	int arr[40] = { 0 };
	scanf("%d", &n);
	int i = 0;
	while (n)
	{
		arr[i] = n % 6;
		i++;
		n = n / 6;
	}//从个位开始取 
	for (i--; i >= 0; i--)//最后一下i会加加 因此i要-- 才会对应最后一个元素 倒着打印 
	{
		printf("%d", arr[i]);
	}
	return 0;
}