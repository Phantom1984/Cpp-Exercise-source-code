#include<iostream>
#include<string>
using namespace std;

/*�ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������*/
/*�ṹ�崴�������ķ�ʽ������*/
/*
1.struct �ṹ���� ������
2.struct �ṹ���� ������ = (��Ա1ֵ����Ա2ֵ...)
3.����ṹ��ʱ˳�㴴��������������ʹ�ã�
*/


//����ѧ���������ͣ�ѧ�����������������䣬������
struct Student
{
	/*��Ա�б����������䣬�����Ķ���*/

	//����
	string name;
	//����
	int age;
	//����
	int score;
}s3;

//�ṹ������
//1.����ṹ��
//2.�����ṹ������
//3.���ṹ�������е�Ԫ�ظ�ֵ
//4.�����ṹ������

//ͨ��ѧ�����ʹ�������ѧ��
int main()
{
	//1.struct Student s1������ṹ����������ʱ���ؼ���struct����ʡ�ԣ������ڶ���ṹ��ʱ���ؼ��ֲ���ʡ��
	//���������struct Student s1��Ҳ����д��Student s1;
	struct Student s1;
	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "������" << s1.name << "," << "���䣺" << s1.age << "," << "������" << s1.score << endl;

	//2.struct Student s2 = {...}
	struct Student s2 = { "����",19,80 };
	cout << "������" << s2.name << "," << "���䣺" << s2.age << "," << "������" << s2.score << endl;

	//3.struct
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "������" << s3.name << "," << "���䣺" << s3.age << "," << "������" << s3.score << endl;
	
	//�����ṹ������
	struct Student stuArray[3] =
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};
	//���ṹ�������е�Ԫ�ظ�ֵ���޸ģ�
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << stuArray[i].name
			<< "���䣺" << stuArray[i].age
			<< "������" << stuArray[i].score << endl;
	}
	//�ṹ��ָ��
	struct Student s = { "����",18,100 };
	//ͨ��ָ��ָ��ṹ�����
	Student * p = &s;
	//ͨ��ָ����ʽṹ������е�����
	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score << endl;
}

