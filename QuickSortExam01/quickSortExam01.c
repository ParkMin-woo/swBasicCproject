/*
 * quickSortExam01.c
 *
 *  Created on: 2021. 3. 9.
 *      Author: Administrator
 */
// 퀵 정렬 예시

#include <stdio.h>
#define SIZE 1000

int a[SIZE];

void swap(int *a , int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void quickSort(int start , int end) {
	if(start >= end) return;
	int key = start;
	int i = start + 1;
	int j = end;
	// int tmp;

	while(i <= j) { // 엇갈릴 때까지 반복합니다.
		while(i <= end && a[i] <= a[key]) i++;
		while(j > start && a[j] >= a[key]) j--;
		if(i > j) swap(&a[key] , &a[j]);
		else swap(&a[i] , &a[j]);
	}

	quickSort(start , j-1);
	quickSort(j+1 , end);
}

int main(void) {
	int n;
	scanf("%d" , &n);
	for(int i = 0 ; i < n ; i++) scanf("%d" , &a[i]);
	quickSort(0 , n-1);
	for(int i = 0 ; i < n ; i++) printf("%d " , a[i]);
	system("pause");
	return 0;
}
