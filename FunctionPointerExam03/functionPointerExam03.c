/*
 * functionPointerExam03.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [�Լ� ������]
// �Ű����� �� ��ȯ �ڷ����� �ִ� �Լ� ������

#include <stdio.h>

int add(int a, int b) {
	return a+b;
}

int substract(int a, int b) {
	return a-b;
}

int main(void) {
	int (*fp)(int, int) = add;
	printf("add => %d\n" , fp(10, 3));
	fp = substract;
	printf("substract => %d\n" , fp(10, 3));
	system("pause");
	return 0;
}
