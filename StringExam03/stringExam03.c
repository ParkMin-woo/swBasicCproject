/*
 * stringExam03.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// ���ڿ� ����� �Լ� - gets()

#include <stdio.h>

int main(void) {
	char c[10];
	char d[100];
	scanf("%s" , &d);
	printf("d => %s\n" , d);

	gets(c);
	printf("c => %s\n" , c);
	system("pause");
	return 0;

}
