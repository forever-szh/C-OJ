#define _CRT_SECURE_NO_WARNINGS 1

//1.大小写转换
//https://www.nowcoder.com/practice/4e089ee8966a4ed4b306f64e68d45264?tpId=107&&tqId=33309&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking
#include<stdio.h>
int main()
{
	int ch = 0;//整型 
	while ((ch = getchar()) != EOF)//end of file--文件结束标志 一个文件的末尾 
	{
		printf("%c\n", (ch + 32));
		getchar();//\n处理 
	}
	return 0;//ctrl z 结束程序 
}
//getchar() 接受字符    输入缓冲区(\n把A送入缓冲区)                   键盘 
//                      A\n两个字符 只读一个字符
//                      先拿A 再拿\n 等于\n也会打印