/*
 * pointerExam02.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// �� �迭 ������ �ּҰ��� ����ϱ�.

#include <stdio.h>

int main(void) {
	int a[] = {1 , 2, 3, 4 ,5 ,6 ,7 ,8 ,9 , 10};
	int length = sizeof(a)/sizeof(a[0]);
	printf("length => %d\n" , length);
	// int b*;
	for(int i = 0 ; i < length ; i++) {
		int *b = &a[i];
		printf("index %d�� �ּҰ� => %d\n" , i, &a[i]);
	}
	system("pause");
	return 0;
}
