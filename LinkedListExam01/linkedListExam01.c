/*
 * linkedListExam01.c
 *
 *  Created on: 2021. 2. 26.
 *      Author: Administrator
 */
// 배열 기반의 리스트

#include <stdio.h>
#define INF 10000

int arr[INF];
int cnt = 0;

void addBack(int data) {
	arr[cnt] = data;
	cnt++;
}

void addFirst(int data) {
	for(int i = cnt ; i >= 1 ; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = data;
	cnt++;
}

void showAll() {
	for(int i = 0 ; i < cnt ; i++) {
		printf("%d " , arr[i]);
	}
	printf("\n");
}

void removeAt(int index) {
	for(int i = index ; i < cnt - 1 ; i++) {
		arr[i] = arr[i+1];
	}
	cnt--;
}

int main(void) {
	addBack(2);
	addFirst(5);
	addBack(4);
	addFirst(3);
	addFirst(1);
	addBack(7);
	addBack(6);
	addBack(8);
	showAll();
	removeAt(3);
	showAll();
	system("pause");
	return 0;
}
