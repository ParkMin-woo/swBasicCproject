/*
 * arrayExam04.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// ���ڿ��� �迭

#include <stdio.h>

int main(void) {
	char a[20] = "Hello World!";
	printf("ù��° ��� => %s\n  " , a);
	for(int i = 0 ; i < 20 ; i++) {
		// printf("%c  " , a[i]);
		if(i == 4) a[i] = ',';
	}

	printf("�ι�° ��� => %s\n  " , a);
	system("pause");
	return 0;
}
