#include<iostream>
#include<string>
using namespace std;

/*��������*/
/*ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬
  ����´���ʾ������ֹ����ǹ�С��
  ����¶Թ�ϲ���ʤ���������˳���Ϸ��*/

int main()
{
	int num = 0;
	float num_input = 0;
	int counter = 6;    //�������
	char ch = 'r';
	bool flag1 = 1;     //�Ƿ������Ϸ
	bool flag2 = 0;
	bool pass = 0;      //�Ƿ�ͨ��
	/*���������*/
	/*ʹ��srand��������ӱ�֤ÿ�γ�������ʱ���ɵ�������һ��*/
	srand((int)time(0));
	num = rand() % 100; //����0-99�������
	
	cout << "����һ��������Ϸ��������0-99����������������6�λ���" << endl;
	cout << "/*************************************************/" << endl;
	while (flag1)
	{
		while (counter)
		{
			cout << "�����룺";
			cin >> num_input;
			if ((num_input > 0 && num_input < 99) && num_input == (int)num_input)
			{
				if (num_input < num)
				{
					cout << "�������ֹ�С�����ŵ���һ�㡣" << endl;
					cout << "" << endl;
					counter--;
					cout << "����" << counter << "�λ���" << endl;
				}
				if (num_input > num)
				{
					cout << "�������ֹ������ŵ�Сһ�㡣" << endl;
					cout << "" << endl;
					counter--;
					cout << "����" << counter << "�λ���" << endl;
				}
				if (num_input == num)
				{
					cout << "bingo����¶��ˣ�" << endl;
					pass = 1;
					counter = 0;
				}
			}
			else
			{
				cout << "��������ȷ�����֣�" << endl;
				cout << "/*****************/" << endl;
			}
		}
		flag2 = 1;
		if (pass == 0)
		{
			cout << "���ź������������� :(" << endl;
			cout << "���ս��Ϊ��" << num << endl;
			cout << "/**********************/" << endl;
		}
		while (flag2)
		{
			cout << "����'r'����������'e'������Ϸ" << endl;
			cin >> ch;
			if (ch == 'r')
			{
				flag2 = 0;
				counter = 6;
				cout << "���¿�ʼ��" << endl;
				cout << "/*************************************************/" << endl;
			}
			else if (ch == 'e')
			{
				flag1 = 0;
				flag2 = 0;
				cout << "��Ϸ����." << endl;
			}
			else
				cout << "��������ȷ�İ�ť��'y'����������'e'�����˳�." << endl;
		}
		
	}
}