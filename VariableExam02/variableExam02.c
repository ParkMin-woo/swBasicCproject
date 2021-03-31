/*
 * variableExam02.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// 컴퓨터가 변수를 처리하는 방법 - 지역변수

#include <stdio.h>

int main() {
	int a = 10;
	// printf("1) a의 값은??? %d\n" , a);
	for(int i = 0 ; i < 1 ; i++) {
		int a = 7;
		// printf("2) a의 값은??? %d\n" , a);
	}

	if(1) {
		int a = 2;
	}

	printf("3) a의 값은??? %d\n" , a);

	system("pause");
	return 0;
}
