/*
 * avlTreeExam01.c
 *
 *  Created on: 2021. 3. 27.
 *      Author: Administrator
 */


// 1) AVL 트리의 정의
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int data;
	int height;
	struct Node *leftChild;
	struct Node *rightChild;
} Node;

int getMax(int a , int b) {
	if(a > b) return a;
	return b;
}

// 2) AVL 트리의 높이 계산 함수
int getHeight(Node *node) {
	if(node == NULL) return 0;
	return node -> height;
}

// 모든 노드는 회전을 수행한 이후에 높이를 다시 계산
void setHeight(Node *node) {
	node -> height = getMax(getHeight(node -> leftChild) , getHeight(node -> rightChild)) + 1;
}

int getDifference(Node *node) {
	if(node == NULL ) return 0;
	Node *leftChild = node -> leftChild;
	Node *rightChilde = node -> rightChild;
	return getHeight(leftChild) - getHeight(rightChilde);
}

// 3) AVL 트리의 LL 회전
Node *rotateLL(Node *node) {
	Node *leftChild = node -> leftChild;
	node -> leftChild = leftChild -> rightChild;
	leftChild -> rightChild = node;
	setHeight(node);	// 회전 이후에 높이를 다시 계산
	return leftChild;	// leftChild는 이후에 setHeight() 수행
}

// 4) AVL 트리의 RR 회전(LL 회전을 반대로 수행합니다.)
Node *rotateRR(Node *node) {
	Node *rightChild = node -> rightChild;
	node -> rightChild = rightChild -> leftChild;
	rightChild -> leftChild = node;
	setHeight(node);	// 회전 이후에 높이를 다시 계산
	return rightChild;	// rightChild는 이후에 setHeight() 수행
}

// 5) AVL 트리의 LR 회전
Node *rotateLR(Node *node) {
	Node *leftChild = node -> leftChild;
	node -> leftChild = rotateRR(leftChild);
	return rotateLL(node);
}

// 6) AVL 트리의 RL 회전(LR 회전을 반대로 수행합니다.)
Node *rotateRL(Node *node) {
	Node *rightChild = node -> rightChild;
	node -> rightChild = rotateLL(rightChild);
	return rotateRR(node);
}

// 7) AVL 트리의 균형 잡기
Node *balance(Node *node) {
	int difference = getDifference(node);
	if(difference >= 2) {
		if(getDifference(node -> leftChild) >= 1) {
			 node = rotateLL(node);
		}
		else {
			node = rotateLR(node);
		}
	}
	else if(difference <= -2) {
		if(getDifference(node -> rightChild) <= -1) {
			node = rotateRR(node);
		}
		else {
			node = rotateRL(node);
		}
	}
	setHeight(node);	// 회전 이후에 높이를 다시 계산
	return node;
}

// 8) AVL 트리의 삽입
Node *insertNode(Node *node, int data) {
	if(!node) {
		node = (Node *)malloc(sizeof(Node));
		node -> data = data;
		node -> height = 1;
		node -> leftChild = node -> rightChild = NULL;
	}
	else if(data < node -> data) {
		node -> leftChild = insertNode(node -> leftChild , data);
		node = balance(node);
	}
	else if(data > node -> data) {
		node -> rightChild = insertNode(node -> rightChild , data);
		node = balance(node);
	}
	else {
		printf("데이터 중복 발생!!!\n");
	}
	return node;
}

// 9) AVL 트리의 출력
Node *root = NULL;
void display(Node *node , int level) {
	if(node != NULL) {
		display(node -> rightChild , level + 1);
		printf("\n");
		if(node == root) {
			printf("Root: ");
		}
		for(int i = 0; i < level && node != root ; i++) {
			printf("   ");
		}
		printf("%d(%d)", node -> data , getHeight(node));
		display(node -> leftChild , level + 1);
	}
}

// 10) AVL 트리 이용해보기
int main(void) {
	root = insertNode(root , 7);
	root = insertNode(root , 6);
	root = insertNode(root , 5);
	root = insertNode(root , 3);
	root = insertNode(root , 1);
	root = insertNode(root , 9);
	root = insertNode(root , 8);
	root = insertNode(root , 12);
	root = insertNode(root , 16);
	root = insertNode(root , 18);
	root = insertNode(root , 23);
	root = insertNode(root , 21);
	root = insertNode(root , 14);
	root = insertNode(root , 15);
	root = insertNode(root , 19);
	root = insertNode(root , 20);
	display(root , 1);
	printf("\n");
	system("pause");
	return 0;
}
