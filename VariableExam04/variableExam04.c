/*
 * variableExam04.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// 컴퓨터가 변수를 처리하는 방법 - 레지스터 변수

#include <stdio.h>

int main(void) {
	register int a = 10, i;		// 자료형 앞에 register를 선언하면 레지스터 변수
	for(i = 0 ; i < a ; i++) {
		printf("i의 값 => %d\n" , i);
	}
	system("pause");
	return 0;
}
