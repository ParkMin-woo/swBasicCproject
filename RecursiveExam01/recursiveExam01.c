/*
 * recursiveExam01.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// ����Լ��� �̿��� ���丮��

#include <stdio.h>

int factorial(int n) {
	if(n == 1) return 1;
	else return n * factorial(n-1);
}

int main(void) {
	// int n = 8;
	int n;
	scanf("%d" , &n);
	int result = factorial(n);
	printf("result = %d" , result);
	system("pause");
	return 0;
}
