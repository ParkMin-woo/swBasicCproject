/*
 * forLoopingExam02.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 1���� N������ ���� ����ϱ�.

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
