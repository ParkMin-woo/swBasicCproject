/*
 * stringExam06.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// strcmp() 함수 사용 예제

#include <stdio.h>

int main(void) {
	char *s1 = "minupark";
	char *s2 = "heeaekang";

	printf("%d\n" , strcmp(s1, s2));
	printf("%d\n" , strcmp(s2, s1));

	system("pause");
	return 0;
}
