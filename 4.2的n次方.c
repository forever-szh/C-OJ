#define _CRT_SECURE_NO_WARNINGS 1

//4.2的n次方
//https://www.nowcoder.com/practice/35a1e8b18658411388bc1672439de1d9?tpId=107&&tqId=33310&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", 1 << n);//1的二进制向左移动n位 
    }
    return 0;
}

