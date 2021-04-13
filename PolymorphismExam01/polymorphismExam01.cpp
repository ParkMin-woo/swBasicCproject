/*
 * polymorphismExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++�� ������ ��� ���� 1]

// �Ϲ����� �Լ��� ���� ���ε�(Static Binding)

#include <iostream>

using namespace std;

class A {
public :
	void show() {
		cout << "This is Class A Object." << endl;
	}
};

class B : public A {
public :
	void show() {
		cout << "This is Class B Object." << endl;
	}
};

int main(void) {
	A *p;
	A a;
	B b;
	p = &a;
	p -> show();
	p = &b;
	p -> show();	// ������ AŬ������ show() �Լ��� ȣ���մϴ�.
	system("pause");
	return 0;
}
