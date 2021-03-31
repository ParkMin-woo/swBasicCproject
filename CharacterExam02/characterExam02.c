/*
 * characterExam02.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// [문자] - 아스키코드 기본 예제

#include <stdio.h>

int main(void) {
	char a = getchar();
	char b = getchar();
	char c = getchar();
	char d = getchar();
	printf("%c\n" , a);
	printf("%c\n" , b);
	printf("%c\n" , c);
	printf("%c\n" , d);
	system("pause");
	return 0;
}
