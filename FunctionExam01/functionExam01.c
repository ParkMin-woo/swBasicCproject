/*
 * functionExam01.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 말머리 붙이기

#include <stdio.h>

void dice(int input) {
	printf("내가 주사위를 던진 횟수 : %d\n" , input);
}

int main(void)
{
	dice(3);
	dice(5);
	dice(1);

	system("pause");
	return 0;
}
