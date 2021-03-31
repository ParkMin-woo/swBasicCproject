/*
 * variableExam03.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// 컴퓨터가 변수를 처리하는 방법 - 정적변수

#include <stdio.h>

void process() {
	static int a = 5;	// 자료형 앞에 static을 선언하면 정적변수.
	a++;
	printf("a의 값은 무엇일까요??? %d\n" , a);
}

int main(void) {
	process();
	process();
	process();
	system("pause");
	return 0;
}
