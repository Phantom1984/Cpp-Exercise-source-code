#include<iostream>
#include<string>
using namespace std;
/*-----------------Ѱ�������е����Ԫ��----------------*/

int main()
{
	int array[5] = { 300,350,200,400,250 };
	int max_num, min_num;
	int i,j = 1;
	// ��ӡԭʼ����
	cout << "ԭʼ���飺";
	for (i = 0; i < 5; i++)
	{
		cout << array[i] << ",";
	}
	cout << endl;
	// ��ȡ���ֵԪ��
	for (j = 1; j < 5; j++)
	{
		if (array[i] > array[j])
			max_num = array[i];
		else
		{
			max_num = array[j];
			i = j;
		}
	}
	// ��ȡ��СֵԪ��
	for (j = 1; j < 5; j++)
	{
		if (array[i] < array[j])
			min_num = array[i];
		else
		{
			min_num = array[j];
			i = j;
		}
	}
	cout << "���Ԫ��Ϊ��" << max_num << endl;
	cout << "��СԪ��Ϊ��" << min_num << endl;

}