/*
 * templateExam02.cpp
 *
 *  Created on: 2021. 4. 12.
 *      Author: Administrator
 */
// [C++�� ���ø�]

// ����� Ư��ȭ(Explicit Specialization)
#include <iostream>
#include <string>

using namespace std;

template <typename T>

void change(T& a , T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <> void change<int>(int& a , int& b) {
	cout << "������ �ڷ����� �ٲ�ϴ�.\n";
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main(void) {
	int a = 10;
	int b = 20;
	change(a , b);
	cout << a << " : " << b << endl;
	system("pause");
	return 0;
}
