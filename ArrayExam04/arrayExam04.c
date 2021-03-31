/*
 * arrayExam04.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 문자열과 배열

#include <stdio.h>

int main(void) {
	char a[20] = "Hello World!";
	printf("첫번째 결과 => %s\n  " , a);
	for(int i = 0 ; i < 20 ; i++) {
		// printf("%c  " , a[i]);
		if(i == 4) a[i] = ',';
	}

	printf("두번째 결과 => %s\n  " , a);
	system("pause");
	return 0;
}
