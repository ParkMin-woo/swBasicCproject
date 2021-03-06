/*
 * stackExam02.c
 *
 *  Created on: 2021. 2. 27.
 *      Author: Administrator
 */
// Linked List를 이용한 스택(Stack) 구현

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

// 스택 삽입 함수
void push(Stack *stack , int data) {
	Node *node = (Node *) malloc(sizeof(Node));
	node -> data = data;
	node -> next = stack -> top;
	stack -> top = node;
}

// 스택 추출 함수
int pop(Stack *stack) {
	if(stack -> top == NULL) {
		printf("스택 언더플로우가 발생했습니다.\n");
		return -INF;
	}
	Node *node = stack -> top;
	int data = node -> data;
	stack -> top = node -> next;
	free(node);
	return data;
}

// 스택 전체 출력 함수
void show(Stack *stack) {
	Node *cur = stack -> top;
	printf("--- 스택의 최상단 ---\n");
	while(cur != NULL) {
		printf("%d\n" , cur -> data);
		cur = cur -> next;
	}
	printf("--- 스택의 최하단 ---\n");
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
