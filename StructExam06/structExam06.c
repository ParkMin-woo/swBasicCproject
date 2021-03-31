/*
 * structExam06.c
 *
 *  Created on: 2021. 2. 21.
 *      Author: Administrator
 */
// 구조체 포인터 변수 사용 예제

#include <stdio.h>

typedef struct { // 학생 구조체 정의, 선언 및 초기화
	char studentId[10];
	char name[10];
	int age;
	int grade;
	char major[100];
} Student;

int main(void) {
	Student *s = malloc(sizeof(Student));
	strcpy(s->studentId , "20113311");
	strcpy(s->name , "강희애");
	s->age = 23;
	s->grade = 4;
	strcpy(s->major , "수학과");
	printf("학번 : %s\n" , s->studentId);
	printf("이름 : %s\n" , s->name);
	printf("나이 : %d\n" , s->age);
	printf("학년 : %d\n" , s->grade);
	printf("전공 : %s\n" , s->major);
	system("pause");
	return 0;
}
