/*
 * stringExam09.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// strstr() �Լ� ��� ����

#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[] = "I Love You";
	char s2[] = "Love";
	printf("ã�� ���ڿ�: %s\n" , strstr(s1 , s2));
	system("pause");
	return 0;
}
