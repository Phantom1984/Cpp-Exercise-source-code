#include"swap_fixed.h"

/*��ͨ��ֵ�����޷�����ʵ�εĽ�����������ָ�����ʵ����һ��*/
void swap_fixed(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap_exe()
{
	int a = 10;
	int b = 20;
	cout << "����ǰ��" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	swap_fixed(&a, &b);
	cout << "������" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
