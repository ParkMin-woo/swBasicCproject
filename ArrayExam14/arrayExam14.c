/*
 * arrayExam14.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [������ �迭�� ������ �迭]
// ������ �迭�� ���� �м� ����6

#include <stdio.h>

int main(void) {
	int a[5] = {4, 3, 5, 9 , 8};
	for(int i = 0 ; i < 5 ; i++) {
		printf("%d\n" , *(a+i));
	}

	system("pause");
	return 0;
}
