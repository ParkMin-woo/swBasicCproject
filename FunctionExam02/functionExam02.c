/*
 * functionExam02.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 더하기 함수 만들기

#include <stdio.h>

int add(int a, int b) {
	return a+b;
}

int main(void) {
	int sum = add(10, 20);
	printf("sum = %d\n" , sum);
	system("pause");
	return 0;
}
