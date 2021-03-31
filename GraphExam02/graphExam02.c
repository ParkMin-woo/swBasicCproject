/*
 * graphExam02.c
 *
 *  Created on: 2021. 3. 13.
 *      Author: Administrator
 */
// ���� ����ġ �׷��� ����

// 1) ���� ����Ʈ ����ü �����
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int index;
	int distance;
	struct Node *next;
} Node;

// 2) ���� ����Ʈ ���� �Լ�
void addFront(Node *root , int index , int distance) {
	Node *node = (Node *)malloc(sizeof(Node));
	node -> index = index;
	node -> distance = distance;
	node -> next = root -> next;
	root -> next = node;
}

// 3) ���� ����Ʈ ��� �Լ�
void showAll(Node *root) {
	Node *cur = root -> next;
	while(cur != NULL) {
		printf("%d(�Ÿ� : %d)" , cur -> index , cur -> distance);
		cur = cur -> next;
	}
}

// 4) ���� ����Ʈ ����غ���
int main(void) {
	// n : ����� ����
	// m : ������ ����
	int n , m;
	scanf("%d %d" , &n , &m);
	Node** a = (Node **)malloc(sizeof(Node *) * (n + 1));
	for(int i = 1 ; i <= n ; i++) {
		a[i] = (Node *)malloc(sizeof(Node));
		a[i] -> next = NULL;
	}

	for(int i = 0 ; i < m ; i++) {
		int x , y , distance;
		scanf("%d %d %d" , &x , &y , &distance);
		addFront(a[x] , y , distance);
	}

	for(int i = 1 ; i <= n ; i++) {
		printf("���� [%d] : " , i);
		showAll(a[i]);
		printf("\n");
	}

	system("pause");
	return 0;
}
