/*
 * stringExam05.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// strlen() �Լ� ��� ����

#include <stdio.h>

int main(void) {
	char *s = "Hello World.";
	int length = strlen(s);
	printf("s�� ���� => %d\n" , length);

	system("pause");
	return 0;
}
