/*
 * variableExam06.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// ��ǻ�Ͱ� ������ ó���ϴ� ��� - �Ű�����
// 1. ������ ���� ���� ���(Call By Reference)

#include <stdio.h>

void add(int *a) {
	*a += 10;
}

int main(void) {
	int a = 7;
	add(&a);
	printf("%d\n" , a);
	system("pause");
	return 0;
}
