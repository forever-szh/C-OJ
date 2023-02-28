#define _CRT_SECURE_NO_WARNINGS 1

//9.判断元音还是辅音
//https://www.nowcoder.com/practice/7eb4df4d52c44d309081509cf52ecbc4?tpId=107&&tqId=33327&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
#include <stdio.h>
int main()
{
    char ch = 0;
    char arr[] = "AEIOUaeiou";
    while ((ch = getchar()) != EOF)
    {
        int i = 0;
        for (i = 0; i < 10; i++)
        {
            if (ch == arr[i])
            {
                printf("Vowel\n");
                break;
            }
        }
        if (i == 10)
            printf("Consonant\n");
        getchar();//去除每个字符后的\n
    }
    return 0;
}
