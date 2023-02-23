#define _CRT_SECURE_NO_WARNINGS 1

//5.变种水仙花数
//https://www.nowcoder.com/practice/c178e3f5cc4641dfbc8b020ae79e2b71?tpId=107&&tqId=33319&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 0;
		int sum = 0;
		for (j = 10; j <= 10000; j *= 10)
		{
			sum += (i / j) * (i % j);
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}