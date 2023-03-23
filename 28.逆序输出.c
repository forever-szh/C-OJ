#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/bb66c27cb7aa48f9ba7d9f88e4068285?tpId=107&&tqId=33373&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//28.ÄæÐòÊä³ö

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 9; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}