/*
 * forLoopingExam05.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// -1�� �ɶ����� ���ϱ�

#include <stdio.h>

int main(void)
{
	int sum = 0;
	for( ; 1; ) {
		int x;
		scanf("%d" , &x);
		if(x == -1) break;
		sum += x;
	}
	printf("sum = %d" , sum);
	system("pause");
	return 0;
}
