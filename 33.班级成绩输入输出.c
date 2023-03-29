#define _CRT_SECURE_NO_WARNINGS 1

//https://www.nowcoder.com/practice/60d96b08e1cb42e38629d54e37eac008?tpId=107&&tqId=33382&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
//33.班级成绩输入输出

#include <stdio.h>
int main()
{
    int i = 0;
    //5个学生
    for (i = 0; i < 5; i++)
    {
        double sum = 0.0;
        int j = 0;
        double score = 0.0;
        for (j = 0; j < 5; j++)
        {
            scanf("%lf", &score);
            sum += score;
            printf("%.1lf ", score);
        }
        printf("%.1lf\n", sum);
    }
    return 0;
}