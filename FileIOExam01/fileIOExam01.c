/*
 * fileIOExam01.c
 *
 *  Created on: 2021. 2. 23.
 *      Author: Administrator
 */
// ������ ���α׷� ��ο��� Ư���� ������ ���� ���� �����Ͽ� ���ڿ� ����ϱ�

#include <stdio.h>

int main(void) {
	// char s[20] = "Hello World.";
	char s[30] = "Better Than Yesterday!!";
	FILE *fp = fopen("temp.txt" , "w");
	// fscanf(fp, "%s\n" , s);
	fprintf(fp, "%s\n" , s);
	fclose(fp);
	return 0;
}
