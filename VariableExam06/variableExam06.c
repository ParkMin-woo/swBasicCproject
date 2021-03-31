/*
 * variableExam06.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// 컴퓨터가 변수를 처리하는 방법 - 매개변수
// 1. 참조에 의한 전달 방식(Call By Reference)

#include <stdio.h>

void add(int *a) {
	*a += 10;
}

int main(void) {
	int a = 7;
	add(&a);
	printf("%d\n" , a);
	system("pause");
	return 0;
}
