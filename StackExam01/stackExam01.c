/*
 * stackExam01.c
 *
 *  Created on: 2021. 2. 27.
 *      Author: Administrator
 */
// �迭�� �̿��� ����(Stack) ����

// ������ ����
#include <stdio.h>
#define SIZE 10000
#define INF 99999999

int stack[SIZE];
int top = -1;

// ���� ���� �Լ�(PUSH)
void push(int data) {
	if(top == SIZE-1) {
		printf("���� �����÷ο찡 �߻��Ͽ����ϴ�.\n");
		return;
	}
	stack[++top] = data;
}

// ���� ���� �Լ�(POP)
int pop() {
	if(top == -1) {
		printf("���� ����÷ο찡 �߻��Ͽ����ϴ�.\n");
		return -INF;
	}
	return stack[top--];
}

// ���� ��ü ��� �Լ�
void show() {
	printf("--- ������ �ֻ�� ---\n");
	for(int i = top ; i >= 0 ; i--) {
		printf("%d\n" , stack[i]);
	}
	printf("--- ������ ���ϴ� ---\n");
}

int main(void) {
	pop();
	push(7);
	push(5);
	push(4);
	show();
	pop();
	show();
	push(6);
	show();
	pop();
	show();
	system("pause");
	return 0;
}
