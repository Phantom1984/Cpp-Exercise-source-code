#include<iostream>
#include<string>
using namespace std;
/*
���Բ�Ĺ�ϵ�ж�
�㵽Բ�ĵľ���==�뾶������Բ��
�㵽Բ�ĵľ���>�뾶������Բ��
�㵽Բ�ĵľ���<�뾶������Բ��
�㵽Բ�ĵľ��빫ʽ��
d=sqrt((x1-x2)^2+(y1-y2)^2)
*/

class Circle
{
public:
	void setX(float x)
	{
		c_x = x;
	}
	void setY(float y)
	{
		c_y = y;
	}
	void setR(float r)
	{
		c_r = r;
	}
	void isInCircle(Circle &c,float x, float y)
	{
		float d;
		d = pow((pow((c.c_x - x), 2) + pow((c.c_y - y), 2)), 0.5);
		if (d > c.c_r)
			cout << "����Բ�⡣" << endl;
		else if (d == c.c_r)
			cout << "����Բ�ϡ�" << endl;
		else
			cout << "����Բ�ڡ�" << endl;
	}
private:
	//Բ������
	float c_x;//Բ��x����
	float c_y;//Բ��y����
	float c_r;//�뾶
};

int main()
{
	Circle c1;
	float x, y;
	float c_x, c_y, c_r;
	cout << "��������x���꣺"; cin >> x;
	cout << "��������y���꣺"; cin >> y;
	cout << "������Բ�ĵ�x���꣺"; cin >> c_x;
	c1.setX(c_x);
	cout << "������Բ�ĵ�y���꣺"; cin >> c_y;
	c1.setY(c_y);
	cout << "������Բ�İ뾶��"; cin >> c_r;
	c1.setR(c_r);
	cout << "���ս����";
	c1.isInCircle(c1, x, y);
}