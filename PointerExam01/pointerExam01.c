/*
 * pointerExam01.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// ������ ���� ����� ������ ����

#include <stdio.h>

int main(void) {
	int a = 5;
	int *b = &a;
	printf("a�� �� => %d\n" , a);
	printf("*b�� �� => %d\n" , *b);
	printf("a�� �ּ� => %d\n" , &a);
	printf("b�� �ּ� => %d\n" , &b);
	system("pause");
	return 0;
}
