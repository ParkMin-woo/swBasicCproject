/*
 * encapsulationExam03.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++�� ĸ��ȭ ���]

// ���� ���
#include <iostream>
#include <string>

using namespace std;

class Person {
private :
	string name;
public :
	static int count;
	Person(string name) : name(name) {
		count++;
	}
};

int Person::count = 0;

int main(void) {
	Person person1("�ڹο�");
	Person person2("��ä��");
	Person person3("�����");
	cout << "���� �ο� �� : " << Person::count << "��\n";
	system("pause");
	return 0;
}
