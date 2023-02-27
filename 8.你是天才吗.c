#define _CRT_SECURE_NO_WARNINGS 1

//8.你是天才吗?
//https://www.nowcoder.com/practice/557cc54704bb4d56b73b62d1a5455331?tpId=107&&tqId=33322&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
//方法1
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        if (n >= 140)
            printf("Genius");
    }
    return 0;
}