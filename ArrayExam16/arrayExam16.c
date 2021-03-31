/*
 * arrayExam16.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [다차원 배열과 포인터 배열]
// 포인터 배열의 구조 분석 예제7

#include <stdio.h>

int main(void) {
	int a[2][5] = {
			{66, 35, 77, 100, 98}
			, {94, 22, 56, 31, 11}
	};

	int (*p)[5] = a[1];
	for(int i = 0 ; i < 5 ; i++) {
		printf("%d " , p[0][i]);
	}
	/*
	int **p = a;
	for(int i = 0 ; i < 2 ; i++) {
		for(int j = 0 ; j < 5 ; j++) {
			printf("%d " , *(*(p+i)+j));
		}
		printf("\n");
	}
	*/

	system("pause");
	return 0;
}
