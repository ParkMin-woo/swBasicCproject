/*
 * stackExam02.c
 *
 *  Created on: 2021. 2. 27.
 *      Author: Administrator
 */
// Linked List�� �̿��� ����(Stack) ����

#include <stdio.h>
#include <stdlib.h>
#define INF 99999999

typedef struct {
	int data;
	struct Node *next;
} Node;

typedef struct {
	Node *top;
} Stack;

// ���� ���� �Լ�
void push(Stack *stack , int data) {
	Node *node = (Node *) malloc(sizeof(Node));
	node -> data = data;
	node -> next = stack -> top;
	stack -> top = node;
}

// ���� ���� �Լ�
int pop(Stack *stack) {
	if(stack -> top == NULL) {
		printf("���� ����÷ο찡 �߻��߽��ϴ�.\n");
		return -INF;
	}
	Node *node = stack -> top;
	int data = node -> data;
	stack -> top = node -> next;
	free(node);
	return data;
}

// ���� ��ü ��� �Լ�
void show(Stack *stack) {
	Node *cur = stack -> top;
	printf("--- ������ �ֻ�� ---\n");
	while(cur != NULL) {
		printf("%d\n" , cur -> data);
		cur = cur -> next;
	}
	printf("--- ������ ���ϴ� ---\n");
}

int main(void) {
	// Stack *stack = (Stack *) malloc(sizeof(Stack));
	Stack stack;
	// printf("%d" , &stack);
	stack.top = NULL;
	show(&stack);
	push(&stack, 7);
	push(&stack, 5);
	push(&stack, 4);
	show(&stack);
	pop(&stack);
	show(&stack);

	push(&stack, 6);
	show(&stack);
	pop(&stack);
	show(&stack);
	system("pause");
	return 0;
}
