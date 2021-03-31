/*
 * queueExam01.c
 *
 *  Created on: 2021. 3. 8.
 *      Author: Administrator
 */
// 배열을 이용한 Queue 구현

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000
#define INF 99999999

int queue[SIZE];
int front = 0;
int rear = 0;

void push(int data) {
	if(rear >= SIZE) {
		printf("큐 오버플로우 발생!\n");
		return;
	}
	queue[rear++] = data;
}

int pop() {
	if(front == rear) {
		printf("큐 언더플로우 발생!\n");
		return -INF;
	}
	return queue[front++];
}

void show() {
	printf("큐의 앞\n");
	for(int i = front ; i < rear ; i++) {
		printf("%d\n" , queue[i]);
	}
	printf("큐의 뒤\n");
}

int main(void) {
	show();
	pop();
	push(7);
	push(5);
	push(4);
	show();
	pop();
	show();
	push(6);
	show();
	system("pause");
	return 0;
}
