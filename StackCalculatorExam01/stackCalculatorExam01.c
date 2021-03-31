/*
 * stackCalculatorExam01.c
 *
 *  Created on: 2021. 2. 28.
 *      Author: Administrator
 */
// stack �����ϱ� ����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #define INF 99999999

typedef struct {
	char data[100];
	struct Node *next;
} Node;

typedef struct {
	Node *top;
} Stack;
// stack �����ϱ� ��

// stack �Լ� �����ϱ� ����
void push(Stack *stack , char *data) {
	Node *node = (Node *) malloc(sizeof(Node));
	// node -> data = data;
	strcpy(node -> data , data);
	node -> next = stack -> top;
	stack -> top = node;
}

char* pop(Stack *stack) {
	if(stack -> top == NULL) {
		printf("STACK UNDERFLOW!!!\n");
		// return -INF;
		return NULL;
	}
	Node *node = stack -> top;
	// int data = node -> data;
	char *data = (char *) malloc(sizeof(char) * 100);
	strcpy(data , node -> data);
	stack -> top = node -> next;
	free(node);
	return data;
}

char* getTop(Stack *stack) {
	Node *top = stack -> top;
	return top -> data;
}
// stack �Լ� �����ϱ� ��

// [���� ǥ������� ��ȯ]
// 1. �켱���� �Լ� �����
int getPriority(char *i) {
	if(!strcmp(i, "(")) return 0;
	if(!strcmp(i , "+") || !strcmp(i , "-")) return 1;
	if(!strcmp(i , "*") || !strcmp(i , "/")) return 2;
	return 3;
}
// 2. ��ȯ �Լ� �����
char* transition(Stack *stack , char **s , int size) {
	// printf("1111");
	// warning: function returns address of local variable [-Wreturn-local-addr]
	// �Լ� ����� ���Ŀ� ��� ���� ���ؼ� ���������� �������� ���� �տ� static�� �����ؼ� ����ؾ���.
	char static res[1000] = "";
	for(int i = 0 ; i < size ; i++) {
		if(!strcmp(s[i] , "+") || !strcmp(s[i] , "-") || !strcmp(s[i] , "*") || !strcmp(s[i] , "/")) {
			while(stack -> top != NULL && getPriority(getTop(stack)) >= getPriority(s[i])) {
				strcat(res , pop(stack)); strcat(res , " ");
			}
			push(stack , s[i]);
		}
		else if(!strcmp(s[i] , "(")) push(stack , s[i]);
		else if(!strcmp(s[i] , ")")) {
			while(strcmp(getTop(stack) , "(")) {
				strcat(res , pop(stack)); strcat(res , " ");
			}
			pop(stack);
		}
		else {
			strcat(res , s[i]); strcat(res , " ");
		}
	}
	while(stack -> top != NULL) {
		strcat(res , pop(stack)); strcat(res , " ");
	}
	return res;
}
// [���� ǥ������� ��ȯ]

// ���� ǥ��� ���
void calculate(Stack *stack , char **s , int size) {
	int x , y , z;
	for(int i = 0 ; i < size ; i++) {
		if(!strcmp(s[i] , "+") || !strcmp(s[i] , "-") || !strcmp(s[i] , "*") || !strcmp(s[i] , "/")) {
			x = atoi(pop(stack));
			y = atoi(pop(stack));
			if(!strcmp(s[i] , "+")) z = y + x;
			if(!strcmp(s[i] , "-")) z = y - x;
			if(!strcmp(s[i] , "*")) z = y * x;
			if(!strcmp(s[i] , "/")) z = y / x;
			char buffer[100];
			sprintf(buffer , "%d" , z);
			push(stack, buffer);
		}
		else {
			push(stack , s[i]);
		}
	}
	printf("%s " , pop(stack));
}

// ������� ���� ����ϱ�
int main(void) {
	Stack stack;
	stack.top = NULL;
	char a[100] = "( ( 3 + 4 ) * 5 ) - 5 * 7 * 5 - 5 * 10";
	int size = 1;
	for(int i = 0 ; i < strlen(a) ; i++) {
		if(a[i] == ' ') size++;
	}
	char *ptr = strtok(a , " ");
	char **input = (char **) malloc(sizeof(char*) * size);
	for(int i = 0 ; i < size ; i++) {
		input[i] = (char *) malloc(sizeof(char) * 100);
	}
	for(int i = 0 ; i < size ; i++) {
		strcpy(input[i] , ptr);
		ptr = strtok(NULL , " ");
	}
	char b[1000] = "";
	strcpy(b , transition(&stack , input , size));
	printf("���� ǥ��� : %s\n" , b);
	size = 1;
	for(int i = 0 ; i < strlen(b) - 1 ; i++) {
		// �������� �׻� ������ ���Ƿ� 1�� ����
		if(b[i] == ' ') size++;
	}
	char *ptr2 = strtok(b , " ");
	for(int i = 0 ; i < size ; i++) {
		strcpy(input[i] , ptr2);
		ptr2 = strtok(NULL , " ");
	}
	calculate(&stack , input , size);
	system("pause");
	return 0;
}
