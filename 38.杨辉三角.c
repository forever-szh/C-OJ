#define _CRT_SECURE_NO_WARNINGS 1


//https://www.nowcoder.com/practice/e671c6a913d448318a49be87850adbcc?tpId=107&&tqId=33390&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//38.Ñî»ÔÈý½Ç

#include <stdio.h>
int main()
{
    int arr[30][30] = { 0 };
    int i = 0;
    int j = 0;
    int n = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (i == j)
                arr[i][j] = 1;
            if (j == 0)
                arr[i][j] = 1;
            if (i > 1 && j > 0)
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}