/*
 * hashLinearProbingExam01.c
 *
 *  Created on: 2021. 3. 27.
 *      Author: Administrator
 */
// �ؽ� ��������� ����

// 1) ���� ����� ����ü ����
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

// 2) ���� ����� �ؽ� ���̺��� �ʱ�ȭ �� ��ȯ �Լ�
// �ؽ� ���̺��� �ʱ�ȭ�մϴ�.
void init(Student **hashTable) {
	for(int i = 0 ; i < TABLE_SIZE ; i++) {
		hashTable[i] = NULL;
	}
}

// �ؽ� ���̺��� �޸𸮸� ��ȯ�մϴ�.
void destructor(Student **hashTable) {
	for(int i = 0 ; i < TABLE_SIZE ; i++) {
		if(hashTable[i] != NULL) {
			free(hashTable[i]);
		}
	}
}

// 3) ���� ����� ������ Ž�� �Լ�
// �ؽ� ���̺� �� �� ������ ���� Ž������ ã���ϴ�.
int findEmpty(Student **hashTable , int id) {
	int i = id % TABLE_SIZE;
	while(1) {
		if(hashTable[i % TABLE_SIZE] == NULL) {
			return i % TABLE_SIZE;
		}
		i++;
	}
}

// Ư���� ID ���� ��Ī�Ǵ� �����͸� �ؽ� ���̺� ������ ã���ϴ�.
int search(Student **hashTable , int id) {
	int i = id % TABLE_SIZE;
	while(1) {
		if(hashTable[i % TABLE_SIZE] == NULL) return -1;
		else if(hashTable[i % TABLE_SIZE] -> id == id) return i;
		i++;
	}
}

// 4) ���� ����� ������ ���� �� ���� �ռ�
// Ư���� Ű �ε����� �����͸� �����մϴ�.
void add(Student **hashTable , Student *input , int key) {
	hashTable[key] = input;
}

// �ؽ� ���̺��� Ư���� Ű�� �����͸� ��ȯ�մϴ�.
Student *getValue(Student **hashTable , int key) {
	return hashTable[key];
}

// 5) ���� ����� ������ ��� �Լ�
// �ؽ� ���̺� �����ϴ� ��� �����͸� ����մϴ�.
void show(Student **hashTable) {
	for(int i = 0 ; i < TABLE_SIZE ; i++) {
		if(hashTable[i] != NULL) {
			printf("Ű : [%d] , �̸� : [%s]\n" , i , hashTable[i] -> name);
		}
	}
}

// 6) ���� ����� �ؽ� ���̺� ����غ���
int main(void) {
	Student **hashTable;
	hashTable = (Student **)malloc(sizeof(Student *) * TABLE_SIZE);
	init(hashTable);

	for(int i = 0 ; i < TABLE_SIZE ; i++) {
		Student *student = (Student *)malloc(sizeof(Student));
		student -> id = rand() % 1000000;
		sprintf(student -> name , "���%d" , student -> id);
		if(search(hashTable , student -> id) == -1) {
			// �ߺ��Ǵ� ID�� �������� �ʵ��� ��.
			int index = findEmpty(hashTable , student -> id);
			add(hashTable , student , index);
		}
	}

	show(hashTable);
	destructor(hashTable);
	system("pause");
	return 0;
}
