/*
 * arrayExam06.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// Hello World!���� l�� �� �� ����ִ����� ����Ͻÿ�.

#include <stdio.h>
// #include <string.h>

int main(void) {
	// char a[20] = "Hello World!";
	char a[] = "Hello World!";
	int j = 0;
	printf("sizeof(a) => %d\n" , sizeof(a));
	printf("sizeof(a[0]) => %d\n" , sizeof(a[0]));
	// sizeof(a)/sizeof(a[0])
	// for(int i = 0 ; i < 20 ; i++) {
	for(int i = 0 ; i < sizeof(a)/sizeof(a[0]) ; i++) {
		// char *temp = a[i];
		if(a[i] == 'l') {
			j++;
		}
	}
	printf("l�� ���� => %d\n" , j);
	system("pause");
	return 0;
}
