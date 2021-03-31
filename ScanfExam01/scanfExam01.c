/*
 * scanfExam01.c
 *
 *  Created on: 2021. 2. 3.
 *      Author: Administrator
 */


// C언어에서 특정한 변수에 값을 넣기 위해서 scanf()를 사용합니다.
#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d" , &a);
	printf("입력한 숫자는 %d입니다.\n" , a);
	system("pause");
	return 0;
}
