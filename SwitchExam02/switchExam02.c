/*
 * switchExam02.c
 *
 *  Created on: 2021. 2. 6.
 *      Author: Administrator
 */
#include <stdio.h>

int main(void)
{
	printf("���� �Է��ϼ���.");
	fflush(stdout);
	int month;
	scanf("%d\n" , &month);
	switch(month) {
	case 3 : case 4 : case 5:
		printf("��\n"); break;
	case 6 : case 7 : case 8:
		printf("����\n"); break;
	case 9 : case 10 : case 11:
		printf("����\n"); break;
	case 12 : case 1 : case 2:
		printf("�ܿ�\n"); break;
	default :
		printf("���� �ٽ� �Է��ϼ���.\n");
	}
	system("pause");
	return 0;
}
