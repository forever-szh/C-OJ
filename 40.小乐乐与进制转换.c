#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/242eafef2a704c0ca130d563b7b3ee2d?tpId=107&&tqId=33392&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//40.С���������ת��

#include<stdio.h>//m���� %n /n�����ó�ÿһλ 
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
	}//�Ӹ�λ��ʼȡ 
	for (i--; i >= 0; i--)//���һ��i��Ӽ� ���iҪ-- �Ż��Ӧ���һ��Ԫ�� ���Ŵ�ӡ 
	{
		printf("%d", arr[i]);
	}
	return 0;
}