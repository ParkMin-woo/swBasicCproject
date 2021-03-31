/*
 * preProcessorExam02.c
 *
 *  Created on: 2021. 2. 24.
 *      Author: Administrator
 */
// 인자가 없는 매크로 전처리기

#include <stdio.h>
#define PI 3.141592

int main(void) {
	int r = 10;
	printf("원의 둘레 : %f\n" , 2 * PI * r);
	system("pause");
	return 0;
}
