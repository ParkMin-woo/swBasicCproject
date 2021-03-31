/*
 * ifExam01.c
 *
 *  Created on: 2021. 2. 6.
 *      Author: Administrator
 */
#include <stdio.h>

int main(void)
{
	printf("손님이 몇 명 왔나요?\n");
	fflush(stdout);
	int a;
	scanf("%d\n" , &a);
	if( a == 1 || a == 2 ) {
		printf("2인석으로 안내하세요.\n");
	}
	else if( a == 3 || a == 4 ) {
		printf("4인석으로 안내하세요.\n");
	}
	else {
		printf("대형석으로 안내하세요.");
	}
	system("pause");
	return 0;
}
