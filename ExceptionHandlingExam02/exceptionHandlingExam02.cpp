/*
 * exceptionHandlingExam02.cpp
 *
 *  Created on: 2021. 4. 15.
 *      Author: Administrator
 */
// ���� ó�� ����1) �⺻���� ����

#include <iostream>

using namespace std;

int main(void) {
	int a = 7 , b = 0;
	try {
		if(b == 0) {
			throw "0���� ���� �� �����ϴ�.";
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
