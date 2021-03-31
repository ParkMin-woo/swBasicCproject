/*
 * arrayExam03.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 배열의 원소 중에서 최댓값 찾기02

#include <stdio.h>
#include <limits.h>

int main(void) {
	int a[10] = {6 , 10, 10, 5, 2, 11, 16, 20, 19, 1};

	int i , maxValue = INT_MIN;
	// int i , maxValue = INT_MAX;
	for(i = 0 ; i < 10 ; i++) {
		if(maxValue < a[i]) maxValue = a[i];
	}

	printf("[최종 배열값]\n");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d\n" , a[i]);
	}
	printf("[MAX값] => %d\n" , maxValue);
	system("pause");
	return 0;
}
