/*
 * switchExam02.c
 *
 *  Created on: 2021. 2. 6.
 *      Author: Administrator
 */
#include <stdio.h>

int main(void)
{
	printf("월을 입력하세요.");
	fflush(stdout);
	int month;
	scanf("%d\n" , &month);
	switch(month) {
	case 3 : case 4 : case 5:
		printf("봄\n"); break;
	case 6 : case 7 : case 8:
		printf("여름\n"); break;
	case 9 : case 10 : case 11:
		printf("가을\n"); break;
	case 12 : case 1 : case 2:
		printf("겨울\n"); break;
	default :
		printf("월을 다시 입력하세요.\n");
	}
	system("pause");
	return 0;
}
