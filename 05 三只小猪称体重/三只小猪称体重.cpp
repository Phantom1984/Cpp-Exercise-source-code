#include<iostream>
#include<string>
using namespace std;

int main()
{
	int weight_1 = 0;
	int weight_2 = 0;
	int weight_3 = 0;

	cout << "������С��A�����أ�";
	cin >> weight_1;
	cout << "������С��B�����أ�";
	cin >> weight_2;
	cout << "������С��C�����أ�";
	cin >> weight_3;

	cout << "С��A�����أ�" << weight_1 << "," << "С��B�����أ�" << weight_2 << "," << "С��C�����أ�" << weight_3 << endl;

	//����1
	if (weight_1 > weight_2 && weight_1 > weight_3)
		cout << "С��A���ء�" << endl;
	if (weight_2 > weight_1 && weight_2 > weight_3)
		cout << "С��B���ء�" << endl;
	if (weight_3 > weight_1 && weight_3 > weight_2)
		cout << "С��C���ء�" << endl;

	////����2
	//if (weight_1 > weight_2)	//A��B��
	//{		
	//	if (weight_1 > weight_3)
	//		cout << "С��A����" << endl;
	//	else
	//		cout << "С��C����" << endl;
	//}
	//else                        //B��A��
	//{
	//	if (weight_2 > weight_3)
	//		cout << "С��B����" << endl;
	//	else
	//		cout << "С��C����" << endl;
	//}
		
}