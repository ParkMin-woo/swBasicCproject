/*
 * activeMemoryExam04.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [동적 메모리 할당]
// 동적 메모리 할당의 다양한 예제

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int **p = (int**)malloc(sizeof(int*)*3);
	for(int i = 0 ; i < 3 ; i++) {
		*(p+i) = (int*)malloc(sizeof(int)*3);
	}

	for(int i = 0 ; i < 3 ; i++) {
		for(int j = 0 ; j < 3 ; j++) {
			*(*(p+i)+j) = 3*i + j;
		}
	}

	for(int i = 0 ; i < 3 ; i++) {
		for(int j = 0 ; j < 3 ; j++) {
			printf("%d " , *(*(p+i)+j));
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
