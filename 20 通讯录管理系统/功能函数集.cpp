#include"function.h"
#include"user_list.h"

void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

void addPerson(Addressbooks * abs)
{
	string name;
	bool flag;
	//�����ϵ��
	//1.�������
	while (1)
	{
		cout << "������Ҫ��ӵ���ϵ��������";
		cin >> name;
		flag = IsName(name);
		if (flag == false)
		{
			cout << "��ϵ�����ֲ��ܺ������֣�" << endl;
			cout << "����ȷ����Ҫ��ӵ���ϵ��������";
			cin >> name;
		}
		else
		{
			abs->personArray[abs->m_Size].m_Name = name;
			cout << "����¼��ɹ���" << endl;
			break;
		}
	}
	//2.����Ա�
	while (1)
	{
		cout << "�������Ա�,����1Ϊ���ԣ�����0ΪŮ�ԣ�";
		cin >> abs->personArray[abs->m_Size].m_Sex;
		if (abs->personArray[abs->m_Size].m_Sex == "1")
		{
			cout << "��¼���Ա���" << endl;
			break;
		}
		else if (abs->personArray[abs->m_Size].m_Sex == "0")
		{
			cout << "��¼���Ա�Ů" << endl;
			break;
		}
		else
			cout << "��������ȷ���Ա���ţ�" << endl;
	}
	//3.�������
	while (1)
	{
		cout << "���������䣺";
		cin >> abs->personArray[abs->m_Size].m_Age;
		flag = IsNum(abs->personArray[abs->m_Size].m_Age);
		if (flag == true)
		{
			if (str2num(abs->personArray[abs->m_Size].m_Age) > 120 || str2num(abs->personArray[abs->m_Size].m_Age) < 0)
				cout << "��������ȷ���������䣬Ĭ��Ϊ0-120" << endl;
			else
			{
				cout << "��¼�����䣺" << abs->personArray[abs->m_Size].m_Age << "��" << endl;
				break;
			}
		}
		else
			cout << "���䲻�ܰ����ַ���" << endl;
	}
	//4.��ӵ绰
	while (1)
	{
		cout << "������绰���룺";
		cin >> abs->personArray[abs->m_Size].m_Phone;
		flag = IsNum(abs->personArray[abs->m_Size].m_Phone);
		if (flag == false || (abs->personArray[abs->m_Size].m_Phone).size()>11)
		{
			cout << "��������ȷ�ĺ��룡" << endl;
		}
		else
		{
			cout << "������¼�룡" << endl;
			break;
		}
	}
	//5.���סַ
		cout << "�������ͥסַ��";
		cin >> abs->personArray[abs->m_Size].m_Addr;
	//6.����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ���" << endl;

		system("pause");//�����������
		system("cls");//����

}
//����Ƿ�Ϊ��ȷ����������
bool IsName(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		int temp = (int)str[i];
		if (!(temp >= 48 && temp <= 57))//���ֵ�asicc������
			continue;
		else
			return false;
	}
	return true;
}
//����Ƿ�Ϊ����
bool IsNum(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		int temp = (int)str[i];
		if (temp >= 48 && temp <= 57)//���ֵ�asicc������
			continue;
		else
			return false;
	}
	return true;
}
//�����ַ���ת��Ϊ����(��bug������λ������10ʧЧ���ұ���Ϊint������)
int str2num(string str)
{
	int result = 0;
	int* arr = NULL;//Ҫ��취��ȡ�����ַ����ĳ��ȣ�����������ĳ���
	arr = new int[str.size()];
	//�Ƚ�ÿ���ַ�����λ������Ӧ��10�ĳ˷����ֱ�������飬�����Ӽ��ɵõ����֡�
	for (int i = 0; i < str.size(); i++)
	{
		arr[i] = ((int)str[i]-48)*pow(10,str.size()-i-1);
	}
	//�������е�Ԫ���ۼ�
	for (int i = 0; i < str.size(); i++)
		result = result + arr[i];
	//����ת����Ľ��
	return result;

	delete[] arr;
}
void showPerson(Addressbooks* abs) 
{
	if (abs->m_Size == 0)
		cout << "��ǰ��¼Ϊ�ա�" << endl;
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" <<(abs->personArray[i].m_Sex == "1"?"��":"Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
		system("pause");
		system("cls");
	}
}
int isExist(Addressbooks* abs, string name)//����1 ͨѶ¼ ����2 �Ա�����
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
		{
			return i;//�ҵ��ˣ���������˶�Ӧ�������±ꡣ
		}
	}
	return -1;//�������������û�ҵ�������-1
}
void deletePerson(Addressbooks * abs)
{
	cout << "������ɾ����ϵ��������" << endl;
	string name;
	cin >> name;
	//ret == -1�����޴���
	//ret != -1���鵽����
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//����ɾ������
		/*ʵ���߼�*/
		/*
		���á�Ĩ�����ķ��������Ѻ������е�������ǰŲ��һλ
		���ǵ�Ŀ������
		*/
		for (int i = ret; i < abs->m_Size; i++)
			abs->personArray[i] = abs->personArray[i + 1];
		abs->m_Size--;
		cout << "ɾ���ɹ�." << endl;
	}
	else
		cout << "���޴���" << endl;
}
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ������ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "����" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
		cout << "���޴���." << endl;
	system("pause");
	system("cls");
}
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	string choose;//ѡ���Ƿ��޸�
	cin >> name;
	bool flag;
	int ret = isExist(abs, name);

	if (ret != -1)//�ҵ�ָ������ϵ��
	{
		//1.�޸�����
		cout << "��ǰ����Ϊ��" << abs->personArray[ret].m_Name << ",�Ƿ��޸ģ�" << endl;
		cout << "y---�޸�,n---����" << endl;
		cin >> choose;
		while (1)
		{
			if (choose == "y" || choose == "n")
			{
				if (choose == "y")
				{
					while (1)//�޸�����
					{
						cout << "�������޸ĺ����ϵ��������";
						cin >> abs->personArray[ret].m_Name;
						flag = IsName(abs->personArray[ret].m_Name);
						if (flag == false)
						{
							cout << "��ϵ�����ֲ��ܺ������֣�" << endl;
							cout << "����ȷ����Ҫ�޸ĵ���ϵ��������";
							cin >> abs->personArray[ret].m_Name;
						}
						else
						{
							cout << "�����޸ĳɹ���" << endl;
							break;
						}
					}
					break;
				}
				else if (choose == "n")
					break;
			}
			else
			{
				cout << "��������ȷ�İ�ť��" << endl;
				cout << "y---�޸�,n---����" << endl;
				cin >> choose;
			}
		}

		//2.�޸��Ա�
		cout << "��ǰ�Ա�Ϊ��" << (abs->personArray[ret].m_Sex == "1" ? "��" : "Ů") << ",�Ƿ��޸ģ�" << endl;
		cout << "y---�޸�,n---����" << endl;
		cin >> choose;
		while (1)
		{
			if (choose == "y" || choose == "n")
			{
				if (choose == "y")
				{
					while (1)
					{
						cout << "�������Ա�,����1Ϊ���ԣ�����0ΪŮ�ԣ�";
						cin >> abs->personArray[ret].m_Sex;
						if (abs->personArray[ret].m_Sex == "1")
						{
							cout << "���޸��Ա���" << endl;
							break;
						}
						else if (abs->personArray[ret].m_Sex == "0")
						{
							cout << "���޸��Ա�Ů" << endl;
							break;
						}
						else
							cout << "��������ȷ���Ա���ţ�" << endl;
					}
					break;
				}
				else if (choose == "n")
					break;
			}
			else
			{
				cout << "��������ȷ�İ�ť��" << endl;
				cout << "y---�޸�,n---����" << endl;
				cin >> choose;
			}
		}

		//3.�޸�����
		cout << "��ǰ����Ϊ��" << abs->personArray[ret].m_Age << ",�Ƿ��޸ģ�" << endl;
		cout << "y---�޸�,n---����" << endl;
		cin >> choose;
		while (1)
		{
			if (choose == "y" || choose == "n")
			{
				if (choose == "y")
				{
					while (1)
					{
						cout << "�������޸ĺ�����䣺";
						cin >> abs->personArray[ret].m_Age;
						flag = IsNum(abs->personArray[ret].m_Age);
						if (flag == true)
						{
							if (str2num(abs->personArray[ret].m_Age) > 120 || str2num(abs->personArray[ret].m_Age) < 0)
								cout << "��������ȷ���������䣬Ĭ��Ϊ0-120" << endl;
							else
							{
								cout << "��¼�����䣺" << abs->personArray[ret].m_Age << "��" << endl;
								break;
							}
						}
						else
							cout << "���䲻�ܰ����ַ���" << endl;
					}
					break;
				}
				else if (choose == "n")
					break;
			}
			else
			{
				cout << "��������ȷ�İ�ť��" << endl;
				cout << "y---�޸�,n---����" << endl;
				cin >> choose;
			}
		}

		//4.�޸ĵ绰
		cout << "��ǰ����Ϊ��" << abs->personArray[ret].m_Phone << ",�Ƿ��޸ģ�" << endl;
		cout << "y---�޸�,n---����" << endl;
		cin >> choose;
		while (1)
		{
			if (choose == "y" || choose == "n")
			{
				if (choose == "y")
				{
					while (1)
					{
						cout << "�������޸ĺ�ĵ绰���룺";
						cin >> abs->personArray[ret].m_Phone;
						flag = IsNum(abs->personArray[ret].m_Phone);
						if (flag == false || (abs->personArray[ret].m_Phone).size() > 11)
						{
							cout << "��������ȷ�ĺ��룡" << endl;
							break;
						}
						else
						{
							cout << "�������޸ģ�" << endl;
							break;
						}
					}
					break;
				}
				else if (choose == "n")
					break;
			}
			else
			{
				cout << "��������ȷ�İ�ť��" << endl;
				cout << "y---�޸�,n---����" << endl;
				cin >> choose;
			}
		}
		
		//5.�޸�סַ
		cout << "��ǰסַΪ��" << abs->personArray[ret].m_Age << ",�Ƿ��޸ģ�" << endl;
		cout << "y---�޸�,n---����" << endl;
		cin >> choose;
		while (1)
		{
			if (choose == "y" || choose == "n")
			{
				if (choose == "y")
				{
					cout << "�������ͥסַ��";
					cin >> abs->personArray[ret].m_Addr;
					break;
				}
				else if (choose == "n")
					break;
			}
			else
			{
				cout << "��������ȷ�İ�ť��" << endl;
				cout << "y---�޸�,n---����" << endl;
				cin >> choose;
			}
		}

		cout << "�޸ĳɹ���" << endl;

		system("pause");//�����������
		system("cls");//����
	}
	else//δ�ҵ�
		cout << "���޴���." << endl;
		
}
void clearPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}