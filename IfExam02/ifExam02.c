/*
 * ifExam02.c
 *
 *  Created on: 2021. 2. 6.
 *      Author: Administrator
 */
#include <stdio.h>

int main(void)
{
	printf("���� �޸� ũ�⸦ �Է��ϼ���. (GB)");
	fflush(stdout);
	int size;
	scanf("%d\n" , &size);
	if( size >= 16 ) {
		printf("�޸� ũ�Ⱑ ����մϴ�.\n");
	}
	else {
		printf("�޸� ũ�⸦ �÷��ּž� �մϴ�.\n");
	}
	system("pause");
	return 0;
}
