/*
 * structExam01.c
 *
 *  Created on: 2021. 2. 21.
 *      Author: Administrator
 */
// �л� ����ü�� ���� Ȱ���ϱ�

#include <stdio.h>

struct Student { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int age;
	int grade;
	char major[100];
};

int main(void) {
	struct Student s;	// �л� ����ü ����
	strcpy(s.studentId , "20113311");
	strcpy(s.name , "�ڹο�");
	s.age = 24;
	s.grade = 3;
	strcpy(s.major , "���а�");
	printf("�й� : %s\n" , s.studentId);
	printf("�̸� : %s\n" , s.name);
	printf("���� : %d\n" , s.age);
	printf("�г� : %d\n" , s.grade);
	printf("���� : %s\n" , s.major);
	system("pause");
	return 0;
}
