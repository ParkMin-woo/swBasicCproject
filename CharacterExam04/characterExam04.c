/*
 * characterExam04.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// �Է� ���۷� ���� ���� �߻��Ǵ� ���� �ذ� ���
// => ���� �ִ� �Է� ���۴� �׻� ���� �� �ֽ��ϴ�.

#include <stdio.h>

int main(void) {
	int i;
	char c;
	scanf("%d" , &i);
	printf("%d\n" , i);
	int temp;

	// �� �ھ� �޾Ƽ� ������ ���̰ų� ���� ���ڸ� ������ �Է��� ���߹Ƿ� �׻� �Է� ���۸� ���ϴ�.
	while((temp = getchar()) != EOF && temp != '\n') {}
	scanf("%c" , &c);
	printf("%c\n" , c);
	system("pause");
	return 0;
}
