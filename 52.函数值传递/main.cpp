#include<iostream>
using namespace std;
//值传递
//定义一个函数，实现两个数字进行交换
//如果函数不需要返回值，声明的时候可以写void
void swap(int num1, int num2)
{
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	return;
	//return;返回值不需要的时候，可以不写return；
}
int main()
{
	int num1 = 1;
	int num2 = 2;
	swap(num1, num2);
	return 0;
}