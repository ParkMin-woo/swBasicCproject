/*
 * arrayExam10.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [������ �迭�� ������ �迭]
// ������ �迭�� ���� �м� ����2

#include <stdio.h>

int main(void) {
	int a[5] = {4, 3, 5, 9 , 8};
	int *b = a;
	printf("%d\n" , b[2]);
	for(int i = 0 ; i < 5 ; i++) {
		printf("%d\n" , b[i]);
	}

	system("pause");
	return 0;
}
