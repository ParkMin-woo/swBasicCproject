/*
 * whileLoopingExam01.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// Ư�� ���ڸ� N�� ����ϱ�

#include <stdio.h>

int main(void)
{
	int n;
	char c;
	scanf("%c %d" , &c, &n);
	while(n--) {
		printf("%c   " , c);
	}
	system("pause");
	return 0;
}
