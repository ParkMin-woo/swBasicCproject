/*
 * structExam02.c
 *
 *  Created on: 2021. 2. 21.
 *      Author: Administrator
 */
#include <stdio.h>

struct Student { // �л� ����ü ����
	char studentId[10];
	char name[10];
	int age;
	int grade;
	char major[100];
};

int main(void) {
	struct Student s = {"20113311" , "�ڹο�" , 24 , 3 ,"���а�"};	// �л� ����ü ����� ���ÿ� �ʱ�ȭ
	printf("�й� : %s\n" , s.studentId);
	printf("�̸� : %s\n" , s.name);
	printf("���� : %d\n" , s.age);
	printf("�г� : %d\n" , s.grade);
	printf("���� : %s\n" , s.major);
	system("pause");
	return 0;
}

