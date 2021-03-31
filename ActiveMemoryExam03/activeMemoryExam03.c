/*
 * activeMemoryExam03.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [동적 메모리 할당]
// 동적 메모리 할당 함수 - memset()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *a = malloc(100);
	memset(a , 'A' , 100);
	for(int i = 0 ; i < 100 ; i++) {
		printf("%c " , *(a+i));
	}
	free(a);

	system("pause");
	return 0;
}
