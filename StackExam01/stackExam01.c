/*
 * stackExam01.c
 *
 *  Created on: 2021. 2. 27.
 *      Author: Administrator
 */
// 배열을 이용한 스택(Stack) 구현

// 스택의 선언
#include <stdio.h>
#define SIZE 10000
#define INF 99999999

int stack[SIZE];
int top = -1;

// 스택 삽입 함수(PUSH)
void push(int data) {
	if(top == SIZE-1) {
		printf("스택 오버플로우가 발생하였습니다.\n");
		return;
	}
	stack[++top] = data;
}

// 스탭 추출 함수(POP)
int pop() {
	if(top == -1) {
		printf("스택 언더플로우가 발생하였습니다.\n");
		return -INF;
	}
	return stack[top--];
}

// 스택 전체 출력 함수
void show() {
	printf("--- 스택의 최상단 ---\n");
	for(int i = top ; i >= 0 ; i--) {
		printf("%d\n" , stack[i]);
	}
	printf("--- 스택의 최하단 ---\n");
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
