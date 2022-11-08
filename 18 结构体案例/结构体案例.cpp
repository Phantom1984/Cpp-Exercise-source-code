#include<iostream>
#include<string>
using namespace std;

/*��������*/
/*ѧ��������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ���������£�*/
/*
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ������
*/

struct student
{
	string name;
	int score;
};

struct teacher
{
	string name;
	struct student sArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "Teacher";
		tArray[i].name += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = "Student";
			tArray[i].sArray[j].name += nameSeed[j];

			int random = rand() % 61 + 40;//40-100�������
			tArray[i].sArray[j].score = random;
		}
		
	}
}

//��ӡ������Ϣ
void printInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArray[i].name << endl;
		
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArray[i].sArray[j].name
				 << "���Է�����" << tArray[i].sArray[j].score << endl;	
		}
	}
}
int main()
{
	srand((int)time(0));
	struct teacher tArray[3];

	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	printInfo(tArray, len);
}