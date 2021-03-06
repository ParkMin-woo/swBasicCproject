/*
 * selectionSortExam01.c
 *
 *  Created on: 2021. 3. 9.
 *      Author: Administrator
 */
// 선택 정렬 예시

#include <stdio.h>
#include <limits.h>
#define SIZE 1000

int a[SIZE];

void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
	int n, min, index;
	scanf("%d" , &n);
	for(int i = 0 ; i < n ; i++) {
		scanf("%d" , &a[i]);
	}
	for(int i = 0 ; i < n ; i++) {
		printf("%d " , a[i]);
	}
	printf("\n");

	for(int i = 0 ; i < n ; i++) {
		min = INT_MAX;
		for(int j = i ; j < n ; j++) {
			if(min > a[j]) {
				min = a[j];
				index = j;
			}
		}
		swap(&a[i] , &a[index]);
	}

	for(int i = 0 ; i < n ; i++) {
		printf("%d " , a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
