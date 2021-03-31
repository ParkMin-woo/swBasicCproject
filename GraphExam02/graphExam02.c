/*
 * graphExam02.c
 *
 *  Created on: 2021. 3. 13.
 *      Author: Administrator
 */
// 방향 가중치 그래프 예제

// 1) 연결 리스트 구조체 만들기
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int index;
	int distance;
	struct Node *next;
} Node;

// 2) 연결 리스트 삽입 함수
void addFront(Node *root , int index , int distance) {
	Node *node = (Node *)malloc(sizeof(Node));
	node -> index = index;
	node -> distance = distance;
	node -> next = root -> next;
	root -> next = node;
}

// 3) 연결 리스트 출력 함수
void showAll(Node *root) {
	Node *cur = root -> next;
	while(cur != NULL) {
		printf("%d(거리 : %d)" , cur -> index , cur -> distance);
		cur = cur -> next;
	}
}

// 4) 연결 리스트 사용해보기
int main(void) {
	// n : 노드의 갯수
	// m : 정점의 갯수
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
		printf("원소 [%d] : " , i);
		showAll(a[i]);
		printf("\n");
	}

	system("pause");
	return 0;
}
