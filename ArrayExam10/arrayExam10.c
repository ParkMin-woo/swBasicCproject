/*
 * arrayExam10.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [다차원 배열과 포인터 배열]
// 포인터 배열의 구조 분석 예제2

#include <stdio.h>

int main(void) {
	int a[5] = {4, 3, 5, 9 , 8};
	int *b = a;
	printf("%d\n" , b[2]);
	for(int i = 0 ; i < 5 ; i++) {
		printf("%d\n" , b[i]);
	}

	system("pause");
	return 0;
}
