/*
 * stringExam02.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// �����ͷ� ���ڿ��� �����ߴ� �ϴ��� ���� �迭ó�� ó���� �����մϴ�.

#include <stdio.h>

int main(void) {
	char *c = "Hello World.";
	// char d[] = "Hello World.";
	printf("%s\n" , c);
	// printf("%s\n" , d);
	printf("%d\n" , sizeof(c));
	// printf("%d\n" , sizeof(d));
	// printf("%d\n" , sizeof(c[0]));
	printf("%c\n" , c[0]);
	printf("%c\n" , c[4]);
	printf("%c\n" , c[8]);

	system("pause");
	return 0;
}
