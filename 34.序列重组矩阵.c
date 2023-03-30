#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/7548f8f5e44c42fa84fb2323d899a966?tpId=107&&tqId=33384&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//34.ÐòÁÐÖØ×é¾ØÕó
#include <stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d%d", &n, &m);
    int i = 0;
    int tmp = 0;
    for (i = 1; i <= m * n; i++)
    {
        scanf("%d", &tmp);
        printf("%d ", tmp);
        if (i % m == 0)
            printf("\n");
    }
    return 0;
}
