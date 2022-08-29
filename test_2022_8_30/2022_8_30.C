#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void move(char POS1, char POS2)
{
	printf(" %C---%C ", POS1, POS2);
}

//	n		代表盘子的个数
//	POS1	代表 A 起始位置
//	POS2	代表 B 中转位置
//	POS3	代表 C 目的位置
void Hanoi(int n, char POS1, char POS2, char POS3)
{
	//	1：递归需要一个终止条件
	if (n == 1)
	{
		move(POS1, POS3);
	}
	//	如果有1个盘子，那么从POS1 移动到 POS3
	else
	{
		Hanoi(n - 1, POS1, POS3, POS2);
		//		n-1个盘子在POS1 通过POS3 移动到 POS2

		move(POS1, POS3);
		//		如果把n-1个已经移动到POS2 ，那么就把POS1的一个移动到POS3

		Hanoi(n - 1, POS2, POS1, POS3);

		//		此时POS2 还有n-1个盘子

		//		此时的POS2就相当于起始位置

		//		把POS2的起始位置 通过POS1的中转位置 移动到POS3目的位置
		

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