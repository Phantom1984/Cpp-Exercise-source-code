#include<iostream>
#include<string>
using namespace std;

//�ṹ��Ƕ�׽ṹ��
/*
���ã��ṹ���еĳ�Ա��������һ���ṹ��
���磺ÿ����ʦ����һ��ѧԱ��һ����ʦ�Ľṹ���У���¼һ��ѧ���Ľṹ��
*/

//����ѧ���ṹ��
struct Student
{
	string name;
	int age;
	int score;
};

//������ʦ�ṹ��
struct teacher
{
	int id;//��ʦ���
	string name;//��ʦ����
	int age;//��ʦ����
	struct Student stu;
};

int main()
{
	teacher t;
	t.id = 1000;
	t.name = "����";
	t.age = 50;
	t.stu.name = "С��";
	t.stu.age = 22;
	t.stu.score = 80;

	cout << "��ʦ������" << t.name << endl;
	cout << "��ʦ��ţ�" << t.id << endl;
	cout << "��ʦ���䣺" << t.age << endl;
	cout << "��ʦ������ѧ����������" << t.stu.name << endl;
	cout << "��ʦ������ѧ�������䣺" << t.stu.age << endl;
	cout << "��ʦ������ѧ���Ŀ��Է�����" << t.stu.score << endl;
}