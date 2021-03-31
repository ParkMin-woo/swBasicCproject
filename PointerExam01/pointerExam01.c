/*
 * pointerExam01.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 포인터 변수 사용의 간단한 예제

#include <stdio.h>

int main(void) {
	int a = 5;
	int *b = &a;
	printf("a의 값 => %d\n" , a);
	printf("*b의 값 => %d\n" , *b);
	printf("a의 주소 => %d\n" , &a);
	printf("b의 주소 => %d\n" , &b);
	system("pause");
	return 0;
}
