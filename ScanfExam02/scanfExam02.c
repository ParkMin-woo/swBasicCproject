/*
 * scanfExam02.c
 *
 *  Created on: 2021. 2. 3.
 *      Author: Administrator
 */


// 실수형을 입력 받아서 소점 셋째 자리까지 출력해보는 예제
#include <stdio.h>

int main(void)
{
	double d;
	scanf("%lf" , &d);
	printf("%.3f\n" , d);
	system("pause");
	return 0;
}
