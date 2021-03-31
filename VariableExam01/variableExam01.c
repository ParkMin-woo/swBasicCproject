/*
 * variableExam01.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// 컴퓨터가 변수를 처리하는 방법 - 전역변수

#include <stdio.h>

int a = 5;	// 전역변수

int changeValue() {
	a = 10;
	return a;
}

int main(void) {
	printf("a의 값은??? %d\n" , a);
	// a = 3;
	changeValue();
	printf("수정 후 a의 값은??? %d\n" , a);

	system("pause");
	return 0;
}
