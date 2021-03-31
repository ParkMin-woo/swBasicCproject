/*
 * preProcessorExam01.c
 *
 *  Created on: 2021. 2. 24.
 *      Author: Administrator
 */
// 전처리기 예제

#include <stdio.h>
#include "temp.h"
// 만약 헤더 파일의 내용이 중복된다면???
#include "temp.h"

int main(void) {
	int a = 10;
	int b = 20;
	printf("%d\n" , add(a, b));
	system("pause");
	return 0;
}
