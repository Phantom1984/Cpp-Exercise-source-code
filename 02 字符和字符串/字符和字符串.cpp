#include<iostream>
#include<string>
using namespace std;

int main()
{
	//�����ַ���ֻ���õ����ţ���ֻ����һ���ַ�
	char ch = 'a';//����char ch = 97;
	cout << "����ַ�:" << ch << endl;

	//�ַ�����ֻ����˫����
    //C����ַ���
	char str[] = "abcd";
	cout << "C����ַ��������" << str << endl;

	//C++����ַ���
	string str2 = "abcd";
	cout << "C++����ַ��������" << str2 << endl;

	system("pause");
	return 0;
}