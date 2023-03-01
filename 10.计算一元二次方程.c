#define _CRT_SECURE_NO_WARNINGS 1

//10.计算一元二次方程
//https://www.nowcoder.com/practice/7da524bb452441b2af7e64545c38dc26?tpId=107&&tqId=33334&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
#include <math.h>
int main()
{
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;
    while (scanf("%f %f %f", &a, &b, &c) != EOF)
    {
        if (a != 0)
        {
            float disc = b * b - 4 * a * c;
            if (disc > 0.0)
            {
                printf("x1=%.2f;x2=%.2f\n",
                    (-b - sqrt(disc)) / (2 * a),
                    (-b + sqrt(disc)) / (2 * a)
                );
            }
            else if (disc < 0.0)
            {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
                    (-b) / (2 * a), sqrt(-disc) / (2 * a),
                    (-b) / (2 * a), sqrt(-disc) / (2 * a));//真正计算在后面 
            }
            else
            {
                if (b == 0 && c == 0)
                    printf("x1=x2=0.00\n");
                else
                printf("x1=x2=%.2f\n", (-b) / (2 * a));
            }
        }
        else
        {
            printf("Not quadratic equation\n");
        }
    }
    return 0;
}