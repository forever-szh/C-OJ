#define _CRT_SECURE_NO_WARNINGS 1

//2.字符金字塔
//https://www.nowcoder.com/practice/0fae60c3b5c64699b7c0f031c2187dde?tpId=107&&tqId=33293&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
#include <stdio.h>
int main()
{
    char ch = 0;
    scanf("%c", &ch);
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        //处理一行
        //空格
        int j = 0;
        for (j = 0; j < 5 - i - 1; j++)
        {
            printf(" ");
        }
        //数字
        for (j = 0; j <= i; j++)
        {
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}