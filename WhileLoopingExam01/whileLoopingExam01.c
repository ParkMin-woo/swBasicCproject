/*
 * whileLoopingExam01.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 특정 문자를 N번 출력하기

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
