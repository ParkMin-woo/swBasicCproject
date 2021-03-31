/*
 * pointerExam03.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 따라서 포인터는 다중으로 사용이 가능합니다.

#include <stdio.h>

int main(void) {
	int a = 5;
	int *b = &a;
	int **c = &b;
	printf("a의 값 => %d\n" , a);
	printf("a의 주소값 => %d\n" , &a);
	printf("*b의 값 => %d\n" , *b);
	printf("b의 주소값 => %d\n" , &b);
	printf("**c의 값 => %d\n" , **c);
	printf("c의 주소값 => %d\n" , &c);
	system("pause");
	return 0;
}
