/*
 * functionPointerExam01.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [함수 포인터]
// 함수 포인터 기본 예제

#include <stdio.h>

void myFunction() {
	printf("This Is My Function!!!");
}

int main(void) {
	printf("%d\n" , myFunction);
	system("pause");
	return 0;
}
