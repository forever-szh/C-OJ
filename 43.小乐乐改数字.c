#define _CRT_SECURE_NO_WARNINGS 1


//https://www.nowcoder.com/practice/fcd30aac9c4f4028b23919a0c649824d?tpId=107&&tqId=33397&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//43.小乐乐改数字

#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int sum = 0;
	while (n)//取出来 再判断奇偶 再*10的n次方 
	{
		int m = n % 10;
		if (m % 2 == 1)
			m = 1;
		else
			m = 0;
		sum += m * pow(10, i);
		n /= 10;
		i++;
	}
	printf("%d", sum);
	return 0;
}
