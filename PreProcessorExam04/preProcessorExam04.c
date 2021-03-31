/*
 * preProcessorExam04.c
 *
 *  Created on: 2021. 2. 24.
 *      Author: Administrator
 */
// #define 문법의 다양한 사용 예제

#include <stdio.h>
#define ll long long
#define ld long double

int main(void) {
	ll a = 987654321000;
	ld b = 100.5054;
	printf("%.1f\n" , a*b);
	system("pause");
	return 0;
}
