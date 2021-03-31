/*
 * priorityQueueExam01.c
 *
 *  Created on: 2021. 3. 13.
 *      Author: Administrator
 */
// 우선순위 큐 예제

#include <stdio.h>
#define MAX_SIZE 10000

// 우선순위 큐의 정의
typedef struct {
	int heap[MAX_SIZE];
	int cnt;
} priorityQueue;

void swap(int *a , int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 우선순위 큐의 삽입
void push(priorityQueue *pq , int data) {
	if(pq -> cnt >= MAX_SIZE) return;
	pq -> heap[pq -> cnt] = data;
	int now = pq -> cnt;
	int parent = (pq -> cnt - 1) / 2;
	// 새 원소를 삽입한 후에 상향식으로 힙을 구성합니다.
	while(now > 0 && pq -> heap[now] > pq -> heap[parent]) {
		swap(&pq -> heap[now] , &pq -> heap[parent]);
		now = parent;
		parent = (parent - 1)/2;
	}
	pq -> cnt++;
}

// 우선순위 큐의 추출
int pop(priorityQueue *pq) {
	if(pq -> cnt <= 0) return -9999;
	int res = pq -> heap[0];
	pq -> cnt--;
	pq -> heap[0] = pq -> heap[pq -> cnt];
	int now = 0, leftChild = 1 , rightChild = 2;
	int target = now;
	// 새 원소를 추출한 이후에 하향식으로 힙을 구성합니다.
	while(leftChild < pq -> cnt) {
		if(pq -> heap[target] < pq -> heap[leftChild]) target = leftChild;
		if(pq -> heap[target] < pq -> heap[rightChild] && rightChild < pq -> cnt) target = rightChild;
		if(target == now) break;	// 더 이상 내려가지 않아도 될 때 종료
		else {
			swap(&pq -> heap[now] , &pq -> heap[target]);
			now = target;
			leftChild = now * 2 + 1;
			rightChild = now * 2 + 2;
		}
	}
	return res;
}

// 우선순위 큐의 사용
int main(void) {
	int n , data;
	scanf("%d" , &n);
	priorityQueue pq;
	pq.cnt = 0;
	for(int i = 0 ; i < n ; i++) {
		scanf("%d" , &data);
		push(&pq , data);
	}
	for(int i = 0 ; i < n ; i++) {
		int data = pop(&pq);
		printf("%d " , data);
	}
	system("pause");
	return 0;
}
