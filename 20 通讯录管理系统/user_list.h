#pragma once//��ֹ�����ض���
#define MAX 1000
#include<string>
using namespace std;
//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա� 1 �У�2 Ů
	string m_Sex;
	//����
	string m_Age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};

//ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
};