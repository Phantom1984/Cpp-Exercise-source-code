#include"function.h"
#include"user_list.h"//�������ϵ�˺�ͨѶ¼�Ľṹ��

int main()
{
	
	Addressbooks abs;
	abs.m_Size = 0;
	int select = 0 ;// �����û�����ı���
	while (1)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
			case 1:// �����ϵ��
				addPerson(&abs);
				break;
			case 2:// ��ʾ��ϵ��
				showPerson(&abs);
				break;
			case 3:// ɾ����ϵ��
				deletePerson(&abs);
				break;
			case 4:// ������ϵ��
				findPerson(&abs);
				break;
			case 5:// �޸���ϵ��
				modifyPerson(&abs);
				break;
			case 6:// �����ϵ��
				clearPerson(&abs);
				break;
			case 0:// �˳�ͨѶ¼
				cout << "�˳��ɹ�����ӭ�´�ʹ�ã�" << endl;
				return 0;//��switch����ֱ�ӷ���0���˳�ѭ��
			default:cout << "��������ȷ�İ�����" << endl;
				break;
		}
	}
	
	/*���Դ���*/
	/*
	string age;
	cin >> age;
	int f = str2num(age);
	cout << f << endl;
	cout << age.size() << endl;
	*/
}
/*
�����ϵ��ʵ�ֲ��裨����Ϊ1000��
�����ϵ�˽ṹ��
���ͨѶ¼�ṹ��
main�����д���ͨѶ¼
��װ�����ϵ�˺���
���������ϵ�˹���
*/