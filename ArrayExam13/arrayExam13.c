/*
 * arrayExam13.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [������ �迭�� ������ �迭]
// ������ �迭�� ���� �м� ����5

#include <stdio.h>

int main(void) {
	double d[10];
	// printf("%d, %d\n" , d, d+9);
	for(int i = 0 ; i < 10 ; i++) {
		printf("%d\n" , d+i);
	}

	system("pause");
	return 0;
}
