/*
 * arrayExam01.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 배열 예제 01

#include <stdio.h>

int main(void) {
	int a[10] = {6 , 10, 3, 5, 2, 11, 16, 20, 19, 1};

	for(int i = 0 ; i < 10 ; i++) {
		printf("%d\n" , a[i]);
	}

	system("pause");
	return 0;
}
