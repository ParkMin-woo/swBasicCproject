/*
 * templateExam01.cpp
 *
 *  Created on: 2021. 4. 12.
 *      Author: Administrator
 */
// [C++�� ���ø�]

// �Լ� ���ø�
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
	string a = "�ڹο�";
	string b = "������";
	change(a , b);
	cout << a << " : " << b << endl;
	system("pause");
	return 0;
}
