/*
 * fileIOExam02.c
 *
 *  Created on: 2021. 2. 23.
 *      Author: Administrator
 */
// ������ �л� ����  ������ �о ���� ������� �غ��� ����

#include <stdio.h>
#include <stdlib.h>

// �л� ����ü �����ϱ�
typedef struct {
	char name[10];
	int score;
} Students;

int main(void) {
	int n , sum = 0;
	FILE *fp;		// FILE ������ ���� ����
	fp = fopen("input.txt" , "r");	// ���������� �ִ� �ش� ���丮���� input.txt��� ������ �����͵��� �д´�.
	fscanf(fp, "%d" , &n);
	Students *student = (Students*)malloc(sizeof(Students)*n);	// ���� ������ ����ü�� ����ϱ����� student ������ ���� ����.
	for(int i = 0 ; i < n ; i++) {
		// input.txt���� �л� ������ ������ �о�ͼ� consoleâ�� �����.
		fscanf(fp, "%s %d" , &((student+i)->name), &((student+i)->score));
		printf("�̸� : %s , ���� : %d\n" , (student+i)->name , (student+i)->score);
		// �о�� ���� �������� �հ踦 ����.
		sum += (student+i)->score;
	}
	printf("sum => %d\n" , sum);
	printf("avg => %.2f\n" , (double)sum/n);	// �л��� ���� ������ �Ҽ��� ��° �ڸ����� ��Ÿ���� ���ؼ� ".2f"��� ���� �����ڷ� ǥ��
	free(student);	// student ������ ���� �޸� ����
	fclose(fp);		// ���� ���� �޸𸮸� �޸𸮿��� ����
	return 0;
}
