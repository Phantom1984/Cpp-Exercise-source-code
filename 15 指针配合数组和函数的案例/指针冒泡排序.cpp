#include"bubble_sort.h"

//ð��������������1 ������׵�ַ ����2 ���鳤��
void bubble_sort(int *arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len-i - 1; j++)
		{
			//���j>j+1��ֵ����������
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//��ӡ����
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i];
		if (i < len-1)
			cout << ',';
		else
			cout << "��" << endl;
	}
}