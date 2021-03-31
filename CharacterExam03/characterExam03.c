/*
 * characterExam03.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 입력 버퍼로 인해 흔히 발생되는 오류 예제

#include <stdio.h>

int main(void) {
	int i;
	char c;
	scanf("%d" , &i);
	printf("%d\n" , i);
	scanf("%c" , &c);
	printf("%c\n" , c);
	system("pause");
	return 0;
}
