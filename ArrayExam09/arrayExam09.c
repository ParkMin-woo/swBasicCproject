/*
 * arrayExam09.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [다차원 배열과 포인터 배열]
// 포인터 배열의 구조 분석 예제1

#include <stdio.h>

int main(void) {
	int a = 10;
	int b[10];
	// b = &a;
	// error: assignment to expression with array type
	printf("%d\n" , b);

	system("pause");
	return 0;
}
