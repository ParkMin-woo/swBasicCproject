/*
 * functionPointerExam02.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [�Լ� ������]
// �Ű����� �� ��ȯ �ڷ����� ���� �Լ� ������

#include <stdio.h>

void myFunction() {
	printf("It's myFunction.\n");
}

void yourFunction() {
	printf("It's yourFunction.\n");
}

int main(void) {
	void (*fp)() = myFunction;
	fp();
	fp = yourFunction;
	fp();
	system("pause");
	return 0;
}
