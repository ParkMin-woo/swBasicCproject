/*
 * stringExam02.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// 포인터로 문자열을 선언했다 하더라도 기존 배열처럼 처리가 가능합니다.

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
