#include<iostream>
using namespace std;
//函数常见样式
//1、无参无返
void test1()
{
	cout << "this is test1()" << endl;
}
//2、有参无返
void test2(int a)
{
	cout << " test2()=" <<a<< endl;
}
//3、无参有返
 int test3()
{
	 cout << "this is test3() " << endl;
	return 1000;
}




//4、有参有返
 int test4(int a)
 {
	 cout << "this is test4()= " <<a<< endl;
	 return 133;
 }


int main()
{

	test1();//无参无返的调用相当于执行了一段封装的函数；
	test2(100);//有参无返，相当于把实参送入函数，执行封装代码
	int num1 =test3();//无参有返,会执行代码，会把return最后返回的值带给主函数。
	//此时的test3()有返回值，相当于就是一个数值。
	cout << "num1=" << num1 << endl;
	int num2 = test4(200);
	cout << "num2=" << num2 << endl;
		return 0;
}