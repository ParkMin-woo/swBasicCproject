/*
 * polymorphismExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++의 다형성 기법 예제 1]

// 일반적인 함수의 정적 바인딩(Static Binding)

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
	p -> show();	// 여전히 A클래스의 show() 함수를 호출합니다.
	system("pause");
	return 0;
}
