/*
 * stringExam08.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// strcat() �Լ� ��� ����

#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[] = "My Name Is ";
	char s2[] = "Minu Park";
	strcat(s1 , s2);
	printf("strcat() �Լ� ��� ��� (s1): %s\n" , s1);
	printf("strcat() �Լ� ��� ���(s2) : %s\n" , s2);
	system("pause");
	return 0;
}
