#include<iostream>
#include<string>
#include"user_list.h"
using namespace std;

void showMenu();//�˵���ʾ
void addPerson(Addressbooks* abs);//�����ϵ�ˣ���ָ���������д������
bool IsName(string str);//�ж��Ƿ���������ַ�
bool IsNum(string str);//�ж��Ƿ�ȫΪ�����ַ�
int str2num(string str);//�������ַ���ת��Ϊ����(��bug�������ʵ�ֲ���)
void showPerson(Addressbooks* abs);//��ʾ��ϵ��
int isExist(Addressbooks* abs, string name);//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������λ���±꣬�������򷵻�-1
void deletePerson(Addressbooks* abs);//ɾ����ϵ��
void findPerson(Addressbooks* abs);//������ϵ��
void modifyPerson(Addressbooks* abs);//�޸���ϵ��
void clearPerson(Addressbooks* abs);//�����ϵ��