#include<stdio.h>


int main()
{
	//���ã����߱��������������Ƽ���ε��ú�����������������Ե�������
	//�������������Զ�Σ����Ǻ����Ķ���ֻ��һ�Ρ�
	int a = 20;
	int b = 30;
	printf("max=%d", max(a, b));


	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}
