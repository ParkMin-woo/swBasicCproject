/*
 * overloadingExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// C++�� �Լ� �����ε�

#include <iostream>
#include <string>

using namespace std;

class Person {
private :
	string name;
public :
	Person() {
		name = "�ƹ���";
	}
	Person(string name) : name(name) {}
	void showName() {
		cout << "�̸� : " << name << "\n";
	}
};

int main(void) {
	Person p1;
	p1.showName();
	Person p2("�ڹο�");
	p2.showName();
	system("pause");
	return 0;
}
