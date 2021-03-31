/*
 * depthFirstSearchExam01.c
 *
 *  Created on: 2021. 3. 25.
 *      Author: Administrator
 */

// 1) ���� ����Ʈ ����
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1001

typedef struct {
	int index;
	struct Node *next;
} Node;

Node **a;
int n , m , c[MAX_SIZE];

// 2) ���� ����Ʈ ���� �Լ�
void addFront (Node *root , int index) {
	Node *node = (Node *)malloc(sizeof(Node));
	node -> index = index;
	node -> next = root -> next;
	root -> next = node;
}

// 3) ���� �켱 Ž�� �Լ�
void dfs(int x) {
	if(c[x]) return;
	c[x] = 1;
	printf("%d " , x);
	Node *cur = a[x] -> next;
	while(cur != NULL) {
		int next = cur -> index;
		dfs(next);
		cur = cur -> next;
	}
}

// 4) ���� �켱 Ž�� ����غ���
int main(void) {
	scanf("%d %d" , &n , &m);
	a = (Node **)malloc(sizeof(Node *) * (MAX_SIZE));
	for(int i = 1 ; i <= n ; i++) {
		a[i] = (Node *)malloc(sizeof(Node));
		a[i] -> next = NULL;
	}

	for(int i = 0 ; i < m ; i++) {
		int x, y;
		scanf("%d %d" , &x, &y);
		addFront(a[x] , y);
		addFront(a[y] , x);
	}
	dfs(1);

	system("pause");
	return 0;
}
