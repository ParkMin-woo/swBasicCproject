/*
 * overloadingExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// C++의 함수 오버로딩

#include <iostream>
#include <string>

using namespace std;

class Person {
private :
	string name;
public :
	Person() {
		name = "아무개";
	}
	Person(string name) : name(name) {}
	void showName() {
		cout << "이름 : " << name << "\n";
	}
};

int main(void) {
	Person p1;
	p1.showName();
	Person p2("박민우");
	p2.showName();
	system("pause");
	return 0;
}
