#include<iostream>
#include<string>
using namespace std;
/*
�����������(Cube)
������������������
�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
*/
class Cube
{
	//��Ϊ
	// ��ȡ���������
public:
	void setL(float l)
	{
		m_L = l;
	}
	float getL()
	{
		return m_L;
	}
	void setW(float w)
	{
		m_W = w;
	}
	float getW()
	{
		return m_W;
	}
	void setH(float h)
	{
		m_H = h;
	}
	float getH()
	{
		return m_H;
	}
	float calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	float calculateV()
	{
		return m_L * m_W * m_H;
	}
	//���ó�Ա�����ж��Ƿ����
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
			return true;
		else
			return false;
	}
private:
	//��������
	float m_L;
	float m_W;
	float m_H;
};

//����ȫ�ֺ����ж� �����������Ƿ����
bool isSame(Cube &c1,Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getH() && c2.getH() && c1.getW() == c2.getW())
		return true;
	else
		return false;
}

int main()
{
	Cube c1;
	c1.setH(10);
	c1.setL(10);
	c1.setW(10);

	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
	cout << "c1�����Ϊ��" << c1.calculateV() << endl;

	Cube c2;
	c2.setH(10);
	c2.setL(10);
	c2.setW(10);
	//����ȫ�ֺ����ж�
	bool ret = isSame(c1, c2);
	if (ret)
		cout << "ȫ�ֺ����жϣ�c1��c2����ȵ�" << endl;
	else
		cout << "ȫ�ֺ����жϣ�c1��c2�ǲ���ȵ�" << endl;
	//���ó�Ա�����ж�
	ret = c1.isSameByClass(c2);
	if (ret)
		cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
	else
		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵ�" << endl;
}