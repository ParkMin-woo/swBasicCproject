/*
 * ifExam01.c
 *
 *  Created on: 2021. 2. 6.
 *      Author: Administrator
 */
#include <stdio.h>

int main(void)
{
	printf("�մ��� �� �� �Գ���?\n");
	fflush(stdout);
	int a;
	scanf("%d\n" , &a);
	if( a == 1 || a == 2 ) {
		printf("2�μ����� �ȳ��ϼ���.\n");
	}
	else if( a == 3 || a == 4 ) {
		printf("4�μ����� �ȳ��ϼ���.\n");
	}
	else {
		printf("���������� �ȳ��ϼ���.");
	}
	system("pause");
	return 0;
}
