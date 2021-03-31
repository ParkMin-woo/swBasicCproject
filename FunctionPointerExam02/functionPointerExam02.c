/*
 * functionPointerExam02.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [함수 포인터]
// 매개변수 및 반환 자료형이 없는 함수 포인터

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
