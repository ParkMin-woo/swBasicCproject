/*
 * variableExam01.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// ��ǻ�Ͱ� ������ ó���ϴ� ��� - ��������

#include <stdio.h>

int a = 5;	// ��������

int changeValue() {
	a = 10;
	return a;
}

int main(void) {
	printf("a�� ����??? %d\n" , a);
	// a = 3;
	changeValue();
	printf("���� �� a�� ����??? %d\n" , a);

	system("pause");
	return 0;
}
