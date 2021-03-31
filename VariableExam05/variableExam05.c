/*
 * variableExam05.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// 컴퓨터가 변수를 처리하는 방법 - 매개변수
// 1. 값에 의한 전달 방식(Call By Value)

#include <stdio.h>

void add(int a , int b) {
	a += b;
	// return a;
}

int main(void) {
	int a = 7;// 	int b = 20;
	// int c = add(a, 10);
	add(a, 10);
	printf("%d\n" , a);
	system("pause");
	return 0;
}
