/*
 * arrayExam15.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// [������ �迭�� ������ �迭]
// ������ �迭�� ���� �м� ����6

#include <stdio.h>

int main(void) {
	int a[5] = {4, 3, 5, 9 , 8};
	int *p = a;
	printf("%d\n" , *(p++));	// 3
	printf("%d\n" , *(++p));	// 5
	printf("%d\n" , *(p+2));	// 8

	system("pause");
	return 0;
}
