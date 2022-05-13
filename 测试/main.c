#include<stdio.h>


int main()
{
	//作用：告诉编译器函数的名称及如何调用函数，函数的主体可以单独定义
	//函数的声明可以多次，但是函数的定义只有一次。
	int a = 20;
	int b = 30;
	printf("max=%d", max(a, b));


	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}
