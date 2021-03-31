/*
 * forLoopingExam02.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 1부터 N까지의 합을 출력하기.

#include <stdio.h>

int main(void)
{
	int n , sum = 0;
	scanf("%d" , &n);
	for(int i = 1 ; i <= n ; i++) {
		sum += i;
	}
	printf("sum = %d" , sum);
	system("pause");
	return 0;
}
