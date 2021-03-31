/*
 * operationExam06.c
 *
 *  Created on: 2021. 2. 6.
 *      Author: Administrator
 */


#include <stdio.h>

int main(void)
{
	int a = 7;
	printf("%d\n" , a++);	// 7
	printf("%d\n" , ++a);	// 9
	printf("%d\n" , a++);	// 9
	printf("%d\n" , a--);	// 10
	printf("%d\n" , --a);	// 8
	printf("%d\n" , a);		// 8
	system("pause");
	return 0;
}
