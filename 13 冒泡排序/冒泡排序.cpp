#include<iostream>
#include<string>
using namespace std;
/*-------------------------ð������----------------------*/
/*�൱��ÿ����ȡ���ֵԪ�أ�Ȼ������ŵ���λ����ĩλ��ѭ��n��*/
int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int i, j, t;

	//��ӡԭʼ����
	cout << "ԭʼ����Ϊ��";
	for (i = 0; i < 9; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;

	//�������ң����ε���
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 8-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
				
		}
	}

	//��ӡ������
	cout << "�����";
	for (i = 0; i < 9; i++)
	{
		cout << arr[i] << ",";
	}
	cout << endl;
}