/*
 * stringExam04.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// gets_s() 함수 사용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char s[100];
	// gets_s(s , sizeof(s))은 gcc에서 지원 안하는 함수.
	// gets_s(s , sizeof(s));
	fgets(s, sizeof(s), stdin);
	printf("%s\n" , s);
	system("pause");
	return 0;
}
