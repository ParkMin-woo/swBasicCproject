/*
 * pointerExam04.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// [�������� ������ ���]
// �迭�� �����ʹ� ���� ���������� �����ϰ� �����մϴ�.

#include <stdio.h>

int main(void) {
	int a[] = {1 , 2, 3 ,4 ,5 ,6 ,7 ,8 ,9, 10};
	int *b = a;
	int length = sizeof(a)/sizeof(a[0]);
	// int length2 = sizeof(*b)/sizeof(*b[0]);
	// printf("length2 �� => %d\n" , length2);

	for(int i = 0 ; i < length ; i++) {
		printf("%d\n" , b[i]);
		printf("%d\n" , &a[i]);
	}
	printf("a�� �ּҰ� => %d\n" , a);

	system("pause");
	return 0;
}
