/*
 * arrayExam13.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [다차원 배열과 포인터 배열]
// 포인터 배열의 구조 분석 예제5

#include <stdio.h>

int main(void) {
	double d[10];
	// printf("%d, %d\n" , d, d+9);
	for(int i = 0 ; i < 10 ; i++) {
		printf("%d\n" , d+i);
	}

	system("pause");
	return 0;
}
