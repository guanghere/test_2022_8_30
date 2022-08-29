#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void move(char POS1, char POS2)
{
	printf(" %C---%C ", POS1, POS2);
}

//	n		�������ӵĸ���
//	POS1	���� A ��ʼλ��
//	POS2	���� B ��תλ��
//	POS3	���� C Ŀ��λ��
void Hanoi(int n, char POS1, char POS2, char POS3)
{
	//	1���ݹ���Ҫһ����ֹ����
	if (n == 1)
	{
		move(POS1, POS3);
	}
	//	�����1�����ӣ���ô��POS1 �ƶ��� POS3
	else
	{
		Hanoi(n - 1, POS1, POS3, POS2);
		//		n-1��������POS1 ͨ��POS3 �ƶ��� POS2

		move(POS1, POS3);
		//		�����n-1���Ѿ��ƶ���POS2 ����ô�Ͱ�POS1��һ���ƶ���POS3

		Hanoi(n - 1, POS2, POS1, POS3);

		//		��ʱPOS2 ����n-1������

		//		��ʱ��POS2���൱����ʼλ��

		//		��POS2����ʼλ�� ͨ��POS1����תλ�� �ƶ���POS3Ŀ��λ��
		

	}
}

int main()
{
	Hanoi(1, 'A', 'B', 'C');
	printf("\n");
	Hanoi(2, 'A', 'B', 'C');
	printf("\n");
	Hanoi(3, 'A', 'B', 'C');

	return 0;
}