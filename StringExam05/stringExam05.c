/*
 * stringExam05.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// strlen() 함수 사용 예제

#include <stdio.h>

int main(void) {
	char *s = "Hello World.";
	int length = strlen(s);
	printf("s의 길이 => %d\n" , length);

	system("pause");
	return 0;
}
