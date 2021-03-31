/*
 * ifExam02.c
 *
 *  Created on: 2021. 2. 6.
 *      Author: Administrator
 */
#include <stdio.h>

int main(void)
{
	printf("메인 메모리 크기를 입력하세요. (GB)");
	fflush(stdout);
	int size;
	scanf("%d\n" , &size);
	if( size >= 16 ) {
		printf("메모리 크기가 충분합니다.\n");
	}
	else {
		printf("메모리 크기를 늘려주셔야 합니다.\n");
	}
	system("pause");
	return 0;
}
