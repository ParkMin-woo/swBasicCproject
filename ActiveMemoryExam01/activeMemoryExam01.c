/*
 * activeMemoryExam01.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [���� �޸� �Ҵ�]
// ���� �޸� �Ҵ� �Լ� - malloc()

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *a = malloc(sizeof(int));
	printf("a�� �ּҰ� => %d\n" , a);
	*a = malloc(sizeof(int));
	printf("a�� �ּҰ� => %d\n" , a);

	system("pause");
	return 0;
}
