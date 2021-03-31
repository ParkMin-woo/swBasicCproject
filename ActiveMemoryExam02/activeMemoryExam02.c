/*
 * activeMemoryExam02.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [동적 메모리 할당]
// 동적 메모리 할당 함수 - free()

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *a = malloc(sizeof(int));
	printf("a의 주소값 => %d\n" , a);
	free(a);
	*a = malloc(sizeof(int));
	printf("a의 주소값 => %d\n" , a);
	free(a);

	system("pause");
	return 0;
}
