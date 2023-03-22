#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/895b3b552d80485cb5e426a0ebf9a251?tpId=107&&tqId=33370&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//27.√‹¬Î—È÷§

#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100] = { 0 };
	char s2[100] = { 0 };
	while (scanf("%s %s", &s1, &s2) != EOF)
	{
		if (strcmp(s1, s2) == 0)
		{
			printf("same\n");
		}
		else
		{
			printf("different\n");
		}
		getchar();
	}
	return 0;
}