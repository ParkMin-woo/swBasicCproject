/*
 * arrayExam03.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// �迭�� ���� �߿��� �ִ� ã��02

#include <stdio.h>
#include <limits.h>

int main(void) {
	int a[10] = {6 , 10, 10, 5, 2, 11, 16, 20, 19, 1};

	int i , maxValue = INT_MIN;
	// int i , maxValue = INT_MAX;
	for(i = 0 ; i < 10 ; i++) {
		if(maxValue < a[i]) maxValue = a[i];
	}

	printf("[���� �迭��]\n");
	for(i = 0 ; i < 10 ; i++) {
		printf("%d\n" , a[i]);
	}
	printf("[MAX��] => %d\n" , maxValue);
	system("pause");
	return 0;
}
