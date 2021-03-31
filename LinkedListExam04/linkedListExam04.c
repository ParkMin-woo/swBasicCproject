/*
 * linkedListExam04.c
 *
 *  Created on: 2021. 2. 27.
 *      Author: Administrator
 */
// 양방향 연결 리스트 예제

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	struct Node *prev;
	struct Node *next;
} Node;

Node *head, *tail;

void insert(int data) {
	Node *node = (Node*) malloc(sizeof(Node));
	node -> data = data;
	Node *cur = head -> next;
	while(cur -> data < data && cur != tail) {
		cur = cur -> next;
	}

	Node *prev = cur -> prev;
	prev -> next = node;
	node -> prev = prev;
	node -> next = cur;
	cur -> prev = node;
}

void removeFront() {
	Node *node = head -> next;
	head -> next = node -> next;
	Node *next = node -> next;
	next -> prev = head;
	free(node);
}

void show() {
	Node *cur = head -> next;
	while(cur != tail) {
		printf("%d " , cur -> data);
		cur = cur -> next;
	}
	printf("\n");
}

int main(void) {
	head = (Node*) malloc(sizeof(Node));
	tail = (Node*) malloc(sizeof(Node));
	head -> next = tail;
	head -> prev = head;
	tail -> next = tail;
	tail -> prev = head;
	insert(2);
	insert(1);
	insert(3);
	insert(9);
	insert(7);
	show();
	removeFront();
	show();
	system("pause");
	return 0;
}
