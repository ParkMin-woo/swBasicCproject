/*
 * templateExam01.cpp
 *
 *  Created on: 2021. 4. 12.
 *      Author: Administrator
 */
// [C++의 템플릿]

// 함수 템플릿
#include <iostream>
#include <string>

using namespace std;

template <typename T>

void change(T& a , T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main(void) {
	string a = "박민우";
	string b = "최정아";
	change(a , b);
	cout << a << " : " << b << endl;
	system("pause");
	return 0;
}
