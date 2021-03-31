/*
 * breadthFisrtSearchExam01.c
 *
 *  Created on: 2021. 3. 27.
 *      Author: Administrator
 */


// 1) ���� ����Ʈ ����
#include <stdio.h>
#include <stdlib.h>
#define INF 99999999
#define MAX_SIZE 1001

typedef struct {
	int index;
	struct Node *next;
} Node;

typedef struct {
	Node *front;
	Node *rear;
	int count;
} Queue;

Node **a;
int n , m , c[MAX_SIZE];

// 2) ���� ����Ʈ ���� �Լ�
void addFront(Node *root , int index) {
	Node *node = (Node *)malloc(sizeof(Node));
	node -> index = index;
	node -> next = root -> next;
	root -> next = node;
}

// 3) ť ���� �Լ�
void queuePush(Queue *queue, int index) {
	Node *node = (Node *)malloc(sizeof(Node));
	node -> index = index;
	node -> next = NULL;
	if(queue -> count == 0) {
		queue -> front = node;
	} else {
		queue -> rear -> next = node;
	}
	queue -> rear = node;
	queue -> count++;
}

// 4) ť ���� �Լ�
int queuePop(Queue *queue) {
	if(queue -> count == 0) {
		printf("ť ����÷ο� �߻�!\n");
		return -INF;
	}
	Node *node = queue -> front;
	int index = node -> index;
	queue -> front = node -> next;
	free(node);
	queue -> count--;
	return index;
}

// 5) �ʺ� �켱 Ž�� �Լ�
void bfs(int start) {
	Queue q;
	q.front = q.rear = NULL;
	q.count = 0;
	queuePush(&q , start);
	c[start] = 1;
	while(q.count != 0) {
		int x = queuePop(&q);
		printf("%d " , x);
		Node *cur = a[x] -> next;
		while(cur != NULL) {
			int next = cur -> index;
			if(!c[next]) {
				queuePush(&q , next);
				c[next] = 1;
			}
			cur = cur -> next;
		}
	}
}

// 6) �ʺ� �켱 Ž�� �̿��غ���
int main(void) {
	scanf("%d %d" , &n , &m);
	a = (Node **)malloc(sizeof(Node *) * (MAX_SIZE));
	for(int i = 1 ; i <= n ; i++) {
		a[i] = (Node *)malloc(sizeof(Node));
		a[i] -> next = NULL;
	}
	for(int i = 0 ; i < m ; i++) {
		int x, y;
		scanf("%d %d" , &x , &y);
		addFront(a[x] , y);
		addFront(a[y] , x);
	}
	bfs(1);
	system("pause");
	return 0;
}