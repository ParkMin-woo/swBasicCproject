/*
 * stringExam07.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// strcpy() 함수 사용 예제

#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[] = "My Name";
	char s2[] = "Minu Park";
	strcpy(s1, s2);
	printf("복사된 문자열 : %s\n" , s1);
	printf("s2 : %s\n" , s2);

	system("pause");
	return 0;
}
