/*
 * pointerExam03.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// ���� �����ʹ� �������� ����� �����մϴ�.

#include <stdio.h>

int main(void) {
	int a = 5;
	int *b = &a;
	int **c = &b;
	printf("a�� �� => %d\n" , a);
	printf("a�� �ּҰ� => %d\n" , &a);
	printf("*b�� �� => %d\n" , *b);
	printf("b�� �ּҰ� => %d\n" , &b);
	printf("**c�� �� => %d\n" , **c);
	printf("c�� �ּҰ� => %d\n" , &c);
	system("pause");
	return 0;
}
