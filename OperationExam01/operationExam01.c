/*
 * operationExam01.c
 *
 *  Created on: 2021. 2. 5.
 *      Author: Administrator
 */


#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d" , &a, &b);
	printf("%d + %d = %d\n" , a, b , a+b);
	printf("%d - %d = %d\n" , a, b , a-b);
	printf("%d * %d = %d\n" , a, b , a*b);
	printf("%d / %d = %d\n" , a, b , a/b);
	printf("%d %% %d = %d\n" , a, b , a%b);
	system("pause");
	return 0;
}
