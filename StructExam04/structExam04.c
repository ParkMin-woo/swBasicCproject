/*
 * structExam04.c
 *
 *  Created on: 2021. 2. 21.
 *      Author: Administrator
 */
// typedef Ű���� �̿�

#include <stdio.h>

typedef struct Student { // �л� ����ü ����, ���� �� �ʱ�ȭ
	char studentId[10];
	char name[10];
	int age;
	int grade;
	char major[100];
} Student;

int main(void) {
	Student s = {"20113311" , "�ڹο�" , 24 , 3 ,"���а�"};
	printf("�й� : %s\n" , s.studentId);
	printf("�̸� : %s\n" , s.name);
	printf("���� : %d\n" , s.age);
	printf("�г� : %d\n" , s.grade);
	printf("���� : %s\n" , s.major);
	system("pause");
	return 0;
}
