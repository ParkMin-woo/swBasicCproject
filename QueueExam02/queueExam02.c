/*
 * queueExam02.c
 *
 *  Created on: 2021. 3. 8.
 *      Author: Administrator
 */
// 연결리스트를 이용한 Queue 구현

#include <stdio.h>
#include <stdlib.h>
#define INF 99999999

typedef struct {
	int data;
	struct Node *next;
} Node;

typedef struct {
	Node *front;
	Node *rear;
	int count;
} Queue;

void push(Queue *queue , int data) {
	Node *node = (Node *)malloc(sizeof(Node));
	node -> data = data;
	node -> next = NULL;
	if(queue -> count == 0) {
		queue -> front = node;
	}
	else {
		queue -> rear -> next = node;
	}
	queue -> rear = node;
	queue -> count++;
}

int pop(Queue *queue) {
	if(queue -> count == 0) {
		printf("Queue Underflow!\n");
		return -INF;
	}
	Node *node = queue -> front;
	int data = node -> data;
	// node -> next = queue -> front;
	queue -> front = node -> next;
	free(node);
	queue -> count--;
	return data;
}

void show(Queue *queue) {
	Node *cur = queue -> front;
	printf("큐의 앞\n");
	while(cur != NULL) {
		printf("%d\n" , cur -> data);
		cur = cur -> next;
	}
	printf("큐의 뒤\n");
}

int main(void) {
	Queue queue;
	queue.front = NULL;
	queue.rear = NULL;
	queue.count = 0;
	show(&queue);
	pop(&queue);
	push(&queue , 7);
	push(&queue , 5);
	push(&queue , 4);
	show(&queue);
	pop(&queue);
	show(&queue);
	push(&queue , 6);
	show(&queue);
	system("pause");
	return 0;
}
