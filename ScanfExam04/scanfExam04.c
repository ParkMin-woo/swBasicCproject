/*
 * scanfExam04.c
 *
 *  Created on: 2021. 2. 3.
 *      Author: Administrator
 */


// 한 자리씩 끊어서 입력받기
#include <stdio.h>

int main(void)
{
	int a , b, c;
	scanf("%1d %1d %1d" , &a , &b , &c);
	printf("%d %d %d\n" , a , b , c);
	system("pause");
	return 0;
}
