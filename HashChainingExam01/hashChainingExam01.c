/*
 * hashChainingExam01.c
 *
 *  Created on: 2021. 3. 27.
 *      Author: Administrator
 */
// �ؽ� ü�̴� ����

// 1) ü�̴� ����ü ����
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TABLE_SIZE 10007
#define INPUT_SIZE 5000

typedef struct {
	int id;
	char name[20];
} Student;

typedef struct {
	Student *data;
	struct Bucket *next;
} Bucket;

// 2) ü�̴� �ؽ� ���̺��� �ʱ�ȭ �� ��ȯ �Լ�
// �ؽ� ���̺��� �ʱ�ȭ�մϴ�.
void init(Bucket **hashTable) {
	for(int i = 0 ; i < TABLE_SIZE ; i++) {
		hashTable[i] = NULL;
	}
}

// �ؽ� ���̺��� �޸𸮸� ��ȯ�մϴ�.
void destructor(Bucket **hashTable) {
	for(int i = 0 ; i < TABLE_SIZE ; i++) {
		if(hashTable[i] != NULL) {
			free(hashTable[i]);
		}
	}
}

// 3) ü�̴� ������ Ž�� �Լ�
int isExist(Bucket **hashTable , int id) {
	int i = id % TABLE_SIZE;
	if(hashTable[i] == NULL) return 0;
	else {
		Bucket *cur = hashTable[i];
		while(cur != NULL) {
			if(cur -> data -> id == id) return 1;
			cur = cur -> next;
		}
	}
	return 0;
}

// 4) ü�̴� ������ ���� �Լ�
// Ư���� Ű �ε����� �����͸� �����մϴ�.
void add(Bucket **hashTable, Student *input) {
	int i = input -> id % TABLE_SIZE;
	if(hashTable[i] == NULL) {
		hashTable[i] = (Bucket *)malloc(sizeof(Bucket));
		hashTable[i] -> data = input;
		hashTable[i] -> next = NULL;
	}
	else {
		Bucket *cur = (Bucket *)malloc(sizeof(Bucket));
		cur -> data = input;
		cur -> next = hashTable[i];
		hashTable[i] = cur;
	}
}

// 5) ü�̴� ������ ��� �Լ�
// �ؽ� ���̺� �����ϴ� ��� �����͸� ����մϴ�.
void show(Bucket **hashTable) {
	for(int i = 0 ; i < TABLE_SIZE ; i++) {
		if(hashTable[i] != NULL) {
			Bucket *cur = hashTable[i];
			while(cur != NULL) {
				printf("Ű : [%d] , �̸� : [%s]\n" , i , cur -> data -> name);
				cur = cur -> next;
			}
		}
	}
}

// 6) ü�̴� �ؽ� ���̺� ����غ���
int main(void) {
	Bucket **hashTable;
	hashTable = (Bucket **)malloc(sizeof(Bucket *) * TABLE_SIZE);
	init(hashTable);

	for(int i = 0 ; i < TABLE_SIZE ; i++) {
		Student *student = (Student *)malloc(sizeof(Student));
		student -> id = rand() % 1000000;
		sprintf(student -> name , "���%d" , student -> id);
		if(!isExist(hashTable , student -> id)) {
			// �ߺ��Ǵ� ID�� �������� �ʵ��� ��.
			add(hashTable , student);
		}
	}

	show(hashTable);
	destructor(hashTable);
	system("pause");
	return 0;
}
