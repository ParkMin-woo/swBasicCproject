/*
 * functionPointerExam04.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [�Լ� ������]
// �Լ� �����͸� ��ȯ�Ͽ� ����ϱ�

#include <stdio.h>

int add(int a , int b) {
	return a+b;
}

int (*process(char *c))(int , int) {
	printf("%s\n" , c);
	return add;
}

int main(void) {
	printf("%d\n" , process("10�� 20�� ���غ��ڽ��ϴ�.")(10 , 20));
	system("pause");
	return 0;
}
