#include<iostream>
#include<string>

using namespace std;

/*��������*/
/*
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա𣻴����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
*/

/*
* ˼·��
* 1.���Ӣ�۽ṹ��
* 2.����������5��Ӣ��
* 3.������������򣬰������������������
* 4.�������Ľ����ӡ���
*/

struct hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(struct hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j�±��Ԫ���������j+1�±��Ԫ�ص����䣬��������Ԫ��
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printHero(struct hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name 
			 << "���䣺" << heroArray[i].age 
			 << "�Ա�" << heroArray[i].sex
			 << endl;
	}
}

int main()
{
	hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ�Ĵ�ӡ�����" << endl;
	
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << "���䣺" << heroArray[i].age << "�Ա�" << heroArray[i].sex
			 << endl;
	}
	cout<<"/*******************************/" << endl;
	cout << "�����Ĵ�ӡ�����" << endl;
	bubbleSort(heroArray, len);
	printHero(heroArray, len);
}