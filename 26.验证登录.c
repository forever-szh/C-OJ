#define _CRT_SECURE_NO_WARNINGS 1


//https://www.nowcoder.com/practice/799daf76369c4fb1a2e2d56f885225ae?tpId=107&&tqId=33361&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//26.��֤��¼

#include <stdio.h>
#include <string.h>
int main()
{
	char name[100] = { 0 };
	char password[100] = { 0 };
	while (scanf("%s %s", &name, &password) != EOF)
	{
		//strcmp(a,b)��ȷ���0 ����ͷ�ļ�#include <string.h> 
		if ((strcmp(name, "admin") == 0) && (strcmp(password, "admin") == 0))
		{
			printf("Login Success!\n");
		}
		else
		{
			printf("Login Fail!\n");
		}
	}
	return 0;
}