/*
 * exceptionHandlingExam02.cpp
 *
 *  Created on: 2021. 4. 15.
 *      Author: Administrator
 */
// 예외 처리 예제1) 기본적인 예제

#include <iostream>

using namespace std;

int main(void) {
	int a = 7 , b = 0;
	try {
		if(b == 0) {
			throw "0으로 나눌 수 없습니다.";
		}
		else {
			cout << a/b << "\n";
		}
	} catch (const char* str) {
		cout << str << "\n";
	}
	system("pause");
	return 0;
}
