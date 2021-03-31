/*
 * structExam04.c
 *
 *  Created on: 2021. 2. 21.
 *      Author: Administrator
 */
// typedef 키워드 이용

#include <stdio.h>

typedef struct Student { // 학생 구조체 정의, 선언 및 초기화
	char studentId[10];
	char name[10];
	int age;
	int grade;
	char major[100];
} Student;

int main(void) {
	Student s = {"20113311" , "박민우" , 24 , 3 ,"수학과"};
	printf("학번 : %s\n" , s.studentId);
	printf("이름 : %s\n" , s.name);
	printf("나이 : %d\n" , s.age);
	printf("학년 : %d\n" , s.grade);
	printf("전공 : %s\n" , s.major);
	system("pause");
	return 0;
}
