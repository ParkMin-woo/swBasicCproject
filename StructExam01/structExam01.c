/*
 * structExam01.c
 *
 *  Created on: 2021. 2. 21.
 *      Author: Administrator
 */
// 학생 구조체를 만들어서 활용하기

#include <stdio.h>

struct Student { // 학생 구조체 정의
	char studentId[10];
	char name[10];
	int age;
	int grade;
	char major[100];
};

int main(void) {
	struct Student s;	// 학생 구조체 선언
	strcpy(s.studentId , "20113311");
	strcpy(s.name , "박민우");
	s.age = 24;
	s.grade = 3;
	strcpy(s.major , "수학과");
	printf("학번 : %s\n" , s.studentId);
	printf("이름 : %s\n" , s.name);
	printf("나이 : %d\n" , s.age);
	printf("학년 : %d\n" , s.grade);
	printf("전공 : %s\n" , s.major);
	system("pause");
	return 0;
}
