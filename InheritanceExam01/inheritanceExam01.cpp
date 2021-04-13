/*
 * inheritanceExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++�� Ŭ���� ��� ���� 01]

// ��� : �θ� Ŭ���� �����ϱ�
#include <iostream>
#include <string>

using namespace std;

class Person {
private :
	string name;
public :
	Person(string name) : name(name) {}
	string getName() {
		return name;
	}
	void showName() {
		cout << "�̸� : " << getName() << "\n";
	}
};

// ��� : �ڽ� Ŭ���� ���� �� ����ϱ�
class Student : Person {
private :
	int studentId;
public :
	Student(int studentId , string name) : Person(name) {
		this -> studentId = studentId;
	}
	void showAll() {
		cout << "�л� ��ȣ : " << studentId << "\n";
		cout << "�л� �̸� : " << getName() << "\n";
	}
};

int main(void) {
	Student student(1 , "�ڹο�");
	student.showAll();
	system("pause");
	return 0;
}
