#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/0f7e422e12be4a7f9958ca2a82abc775?tpId=107&&tqId=33394&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//41.小乐乐定闹钟

#include<stdio.h>
int main()
{
	int h = 0;
	int m = 0;
	int k = 0;
	scanf("%d:%d %d", &h, &m, &k);
	h = ((m + k) / 60 + h) % 24;//防止超过24小时 
	m = (m + k) % 60;//防止超过60分钟
	printf("%02d:%02d\n", h, m);
	return 0;
}