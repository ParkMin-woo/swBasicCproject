/*
 * polymorphismExam02.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++�� ������ ��� ���� 2]

// ���� �Լ� : ���� ���ε�(Dynamic Binding)
#include <iostream>

using namespace std;

class A {
public :
	virtual void show() {
		cout << "This is Class A Object." << endl;
	}
};

class B : public A {
public :
	virtual void show() {
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
	p -> show();
	system("pause");
	return 0;
}
