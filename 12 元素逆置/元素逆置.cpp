#include<iostream>
#include<string>
using namespace std;

int main()
{
	int array[5] = { 1,3,2,5,4 };	//����ԭʼ����
	int in_arr[5] = { 0,0,0,0,0 };  //������������
	int i;

	for (i = 0; i < 5; i++)
		in_arr[i] = array[4 - i];
	cout << "ԭʼ����Ϊ��";
	for (i = 0; i < 5; i++)
		cout << array[i] << ",";
	cout << endl;
	cout << "��������Ϊ��";
	for (i = 0; i < 5; i++)
		cout << in_arr[i] << ",";
	cout << endl;
}