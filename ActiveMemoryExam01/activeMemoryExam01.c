/*
 * activeMemoryExam01.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [동적 메모리 할당]
// 동적 메모리 할당 함수 - malloc()

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *a = malloc(sizeof(int));
	printf("a의 주소값 => %d\n" , a);
	*a = malloc(sizeof(int));
	printf("a의 주소값 => %d\n" , a);

	system("pause");
	return 0;
}
