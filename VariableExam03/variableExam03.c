/*
 * variableExam03.c
 *
 *  Created on: 2021. 2. 9.
 *      Author: Administrator
 */
// ��ǻ�Ͱ� ������ ó���ϴ� ��� - ��������

#include <stdio.h>

void process() {
	static int a = 5;	// �ڷ��� �տ� static�� �����ϸ� ��������.
	a++;
	printf("a�� ���� �����ϱ��??? %d\n" , a);
}

int main(void) {
	process();
	process();
	process();
	system("pause");
	return 0;
}
