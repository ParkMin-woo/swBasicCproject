/*
 * preProcessorExam03.c
 *
 *  Created on: 2021. 2. 24.
 *      Author: Administrator
 */
// 인자가 있는 매크로 전처리기

#include <stdio.h>
#define POW(X) X*X

int main(void) {
	int a = 7;
	printf("%d의 제곱 = %d" , a , POW(a));
	system("pause");
	return 0;
}
