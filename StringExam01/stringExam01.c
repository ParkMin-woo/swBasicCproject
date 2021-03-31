/*
 * stringExam01.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 문자열과 포인터 기본 예제

#include <stdio.h>

int main(void) {
	/*
	char c[] = "Hello World.";
	char *s = c;
	int length = sizeof(c)/sizeof(c[0]);
	for(int i = 0 ; i < length ; i++) {
		printf("%c\n" , s[i]);
		printf("%d\n" , &s[i]);
	}
	*/
	char *c =  "Hello World.";
	printf("%d\n" , c);
	system("pause");
	return 0;
}
