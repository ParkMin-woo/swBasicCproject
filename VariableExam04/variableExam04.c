/*
 * variableExam04.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// ��ǻ�Ͱ� ������ ó���ϴ� ��� - �������� ����

#include <stdio.h>

int main(void) {
	register int a = 10, i;		// �ڷ��� �տ� register�� �����ϸ� �������� ����
	for(i = 0 ; i < a ; i++) {
		printf("i�� �� => %d\n" , i);
	}
	system("pause");
	return 0;
}
