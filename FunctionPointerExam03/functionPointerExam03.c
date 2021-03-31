/*
 * functionPointerExam03.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [함수 포인터]
// 매개변수 및 반환 자료형이 있는 함수 포인터

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
