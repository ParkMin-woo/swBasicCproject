/*
 * whileLoopingExam02.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 특정 숫자의 구구단 출력하기

#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;
	scanf("%d", &n);

	while(i <= 9) {
		printf("%d * %d = %d\n" , n , i , n*i);
		i++;
	}

	system("pause");
	return 0;
}
