#define _CRT_SECURE_NO_WARNINGS 1

//7.竞选社长
//https://www.nowcoder.com/practice/45a30e3ef51040ed8a7674984d6d1553?tpId=107&&tqId=33321&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int main()
{
    char arr[100] = { 0 };
    gets(arr);
    int i = 0;
    int count_a = 0;
    int count_b = 0;
    while (arr[i] != '0')
    {
        if (arr[i] == 'A')
        {
            count_a++;
        }
        else if (arr[i] == 'B')
        {
            count_b++;
        }
        i++;
    }
    if (count_a > count_b)
        printf("A");
    else if (count_a < count_b)
        printf("B");
    else
        printf("E");
    return 0;
}
