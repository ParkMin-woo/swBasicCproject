/*
 * operationExam04.c
 *
 *  Created on: 2021. 2. 5.
 *      Author: Administrator
 */


#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d" , &a, &b, &c);
	printf("%d\n" , !a);
	printf("%d\n" , a && b);
	printf("%d\n" , (a > b) && (b > c));
	system("pause");
	return 0;
}
