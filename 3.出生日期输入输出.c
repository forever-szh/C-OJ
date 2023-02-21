#define _CRT_SECURE_NO_WARNINGS 1
//出生日期输入输出
//https://www.nowcoder.com/practice/4a4a9dd1edb6453ba4a0432319200743?tpId=107&&tqId=33295&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

//通过scanf函数的% m格式控制可以指定输入域宽，输入数据域宽（列数），按此宽度截取所需数据；通过
//printf函数的 % 0格式控制符，输出数值时指定左面不使用的空位置自动填0。

#include <stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%4d%2d%2d", &year, &month, &date);//%4d就是读取4位整数
    printf("year=%d\n", year);
    printf("month=%02d\n", month);//输出不够2位时，左边拿0填充
    printf("date=%02d\n", date);
    return 0;
}
