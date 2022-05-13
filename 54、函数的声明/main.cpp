#include<iostream>
using namespace std;
int max(int a, int b);//函数可以被多次声明
int max(int a, int b);//函数声明是告诉编译器我有一个函数，可能在后面，你先不要报错，你往后面看看
int max(int a, int b)
{
	return a > b ? a : b;
	//函数的定义是给编译器说你怎么做，如果多次定义编译器会不知道做哪个是正确的做法
}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//	//函数的定义是给编译器说你怎么做，如果多次定义编译器会不知道做哪个是正确的做法
//}
int main()
{
	//作用：告诉编译器函数的名称及如何调用函数，函数的主体可以单独定义
	//函数的声明可以多次，但是函数的定义只有一次。
	int a = 20;
	int b = 30;
	cout << max(a,b) << endl;

	return 0;
}
//函数若没有提前声明是不能被调用的，如果写在了后面的话，这里不清楚为什么没有声明也能被调用
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}