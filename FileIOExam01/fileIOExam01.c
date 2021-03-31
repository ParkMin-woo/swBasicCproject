/*
 * fileIOExam01.c
 *
 *  Created on: 2021. 2. 23.
 *      Author: Administrator
 */
// 현재의 프로그램 경로에서 특정한 파일을 쓰기 모드로 생성하여 문자열 기록하기

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
