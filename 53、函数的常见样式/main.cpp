#include<iostream>
using namespace std;
//����������ʽ
//1���޲��޷�
void test1()
{
	cout << "this is test1()" << endl;
}
//2���в��޷�
void test2(int a)
{
	cout << " test2()=" <<a<< endl;
}
//3���޲��з�
 int test3()
{
	 cout << "this is test3() " << endl;
	return 1000;
}




//4���в��з�
 int test4(int a)
 {
	 cout << "this is test4()= " <<a<< endl;
	 return 133;
 }


int main()
{

	test1();//�޲��޷��ĵ����൱��ִ����һ�η�װ�ĺ�����
	test2(100);//�в��޷����൱�ڰ�ʵ�����뺯����ִ�з�װ����
	int num1 =test3();//�޲��з�,��ִ�д��룬���return��󷵻ص�ֵ������������
	//��ʱ��test3()�з���ֵ���൱�ھ���һ����ֵ��
	cout << "num1=" << num1 << endl;
	int num2 = test4(200);
	cout << "num2=" << num2 << endl;
		return 0;
}