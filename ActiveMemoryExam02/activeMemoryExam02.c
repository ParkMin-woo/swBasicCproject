/*
 * activeMemoryExam02.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [���� �޸� �Ҵ�]
// ���� �޸� �Ҵ� �Լ� - free()

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *a = malloc(sizeof(int));
	printf("a�� �ּҰ� => %d\n" , a);
	free(a);
	*a = malloc(sizeof(int));
	printf("a�� �ּҰ� => %d\n" , a);
	free(a);

	system("pause");
	return 0;
}
