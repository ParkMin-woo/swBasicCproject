/*
 * functionPointerExam04.c
 *
 *  Created on: 2021. 2. 10.
 *      Author: Administrator
 */
// [함수 포인터]
// 함수 포인터를 반환하여 사용하기

#include <stdio.h>

int add(int a , int b) {
	return a+b;
}

int (*process(char *c))(int , int) {
	printf("%s\n" , c);
	return add;
}

int main(void) {
	printf("%d\n" , process("10과 20을 더해보겠습니다.")(10 , 20));
	system("pause");
	return 0;
}
