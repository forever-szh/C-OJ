#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/da13e0cf321e4df9acd0fdf0a433cbb0?tpId=107&&tqId=33396&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//42.小乐乐与欧几里得

#include <stdio.h>
int main()
{
    long long n = 0;
    long long m = 0;
    long long tmp = 0;
    scanf("%lld %lld", &n, &m);
    int a = n;
    int b = m;
    while (tmp = a % b)
    {
        a = b;
        b = tmp;
    }
    printf("%lld\n", b + m * n / b);
    return 0;
}
