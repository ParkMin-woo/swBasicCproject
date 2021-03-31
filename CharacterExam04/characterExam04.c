/*
 * characterExam04.c
 *
 *  Created on: 2021. 2. 8.
 *      Author: Administrator
 */
// 입력 버퍼로 인해 흔히 발생되는 오류 해결 방법
// => 남아 있는 입력 버퍼는 항상 지울 수 있습니다.

#include <stdio.h>

int main(void) {
	int i;
	char c;
	scanf("%d" , &i);
	printf("%d\n" , i);
	int temp;

	// 한 자씩 받아서 파일의 끝이거나 개행 문자를 만나면 입력을 멈추므로 항상 입력 버퍼를 비웁니다.
	while((temp = getchar()) != EOF && temp != '\n') {}
	scanf("%c" , &c);
	printf("%c\n" , c);
	system("pause");
	return 0;
}
