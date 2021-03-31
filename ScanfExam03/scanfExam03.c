/*
 * scanfExam03.c
 *
 *  Created on: 2021. 2. 3.
 *      Author: Administrator
 */


// 두 숫자를 입력받아 숫서 바꾸어서 출력해보는 예제
#include <stdio.h>

int main(void)
{
	int a , b;
	scanf("%d %d" , &a , &b);
	printf("입력한 숫자는 %d, %d입니다.\n" , b, a);
	system("pause");
	return 0;
}
