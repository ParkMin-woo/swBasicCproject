/*
 * variableExam05.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// ��ǻ�Ͱ� ������ ó���ϴ� ��� - �Ű�����
// 1. ���� ���� ���� ���(Call By Value)

#include <stdio.h>

void add(int a , int b) {
	a += b;
	// return a;
}

int main(void) {
	int a = 7;// 	int b = 20;
	// int c = add(a, 10);
	add(a, 10);
	printf("%d\n" , a);
	system("pause");
	return 0;
}
