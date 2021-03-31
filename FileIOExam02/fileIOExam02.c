/*
 * fileIOExam02.c
 *
 *  Created on: 2021. 2. 23.
 *      Author: Administrator
 */
// 간단한 학생 성적  파일을 읽어서 파일 입출력을 해보는 예제

#include <stdio.h>
#include <stdlib.h>

// 학생 구조체 선언하기
typedef struct {
	char name[10];
	int score;
} Students;

int main(void) {
	int n , sum = 0;
	FILE *fp;		// FILE 포인터 변수 선언
	fp = fopen("input.txt" , "r");	// 실행파일이 있는 해당 디렉토리에서 input.txt라는 파일의 데이터들을 읽는다.
	fscanf(fp, "%d" , &n);
	Students *student = (Students*)malloc(sizeof(Students)*n);	// 위에 선언한 구조체를 사용하기위한 student 포인터 변수 선언.
	for(int i = 0 ; i < n ; i++) {
		// input.txt에서 학생 정보와 성적을 읽어와서 console창에 출력함.
		fscanf(fp, "%s %d" , &((student+i)->name), &((student+i)->score));
		printf("이름 : %s , 성적 : %d\n" , (student+i)->name , (student+i)->score);
		// 읽어온 성적 데이터의 합계를 구함.
		sum += (student+i)->score;
	}
	printf("sum => %d\n" , sum);
	printf("avg => %.2f\n" , (double)sum/n);	// 학생들 성적 정보를 소수점 둘째 자리까지 나타내기 위해서 ".2f"라는 형식 지정자로 표현
	free(student);	// student 포인터 변수 메모리 해제
	fclose(fp);		// 파일 객제 메모리를 메모리에서 삭제
	return 0;
}
