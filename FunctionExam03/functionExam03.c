/*
 * functionExam03.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 사칙연산 함수 만들기

#include <stdio.h>

void calculator(int a , int b) {
	printf("%d + %d = %d\n" , a, b , a+b);
	printf("%d - %d = %d\n" , a, b , a-b);
	printf("%d * %d = %d\n" , a, b , a*b);
	printf("%d / %d = %d\n" , a, b , a/b);
	printf("%d %% %d = %d\n" , a, b , a%b);
	printf("\n");
}

int main(void) {
	calculator(10 , 3);
	calculator(4, 7);
	calculator(20, 6);
	system("pause");
	return 0;
}
