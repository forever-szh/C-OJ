#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/e09de1fc11db4a438cf8f0668848660d?tpId=107&&tqId=33400&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//44.С�������ַ���

#include<stdio.h>
int main()
{
    char arr[8000] = { 0 };
    scanf("%s", arr);
    //ͳ���Ӵ�CHN�ĸ���
    long long c = 0;
    long long ch = 0;
    long long chn = 0;
    char* p = arr;
    while (*p)
    {
        if (*p == 'C')
            c++;
        else if (*p == 'H')
            ch += c;
        else if (*p == 'N')
            chn += ch;
        p++;
    }
    printf("%lld", chn);
    return 0;
}