/*
 * structExam05.c
 *
 *  Created on: 2021. 2. 21.
 *      Author: Administrator
 */
// �͸���ü

#include <stdio.h>

typedef struct { // �л� ����ü ����, ���� �� �ʱ�ȭ
	char studentId[10];
	char name[10];
	int age;
	int grade;
	char major[100];
} Student;

int main(void) {
	Student s = {"20113311" , "�ڹο�" , 25 , 3 ,"��ǻ�Ͱ��а�"};
	printf("�й� : %s\n" , s.studentId);
	printf("�̸� : %s\n" , s.name);
	printf("���� : %d\n" , s.age);
	printf("�г� : %d\n" , s.grade);
	printf("���� : %s\n" , s.major);
	system("pause");
	return 0;
}
