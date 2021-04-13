/*
 * inheritanceExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++의 클래스 상속 예제 01]

// 상속 : 부모 클래스 정의하기
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
		cout << "이름 : " << getName() << "\n";
	}
};

// 상속 : 자식 클래스 정의 및 사용하기
class Student : Person {
private :
	int studentId;
public :
	Student(int studentId , string name) : Person(name) {
		this -> studentId = studentId;
	}
	void showAll() {
		cout << "학생 번호 : " << studentId << "\n";
		cout << "학생 이름 : " << getName() << "\n";
	}
};

int main(void) {
	Student student(1 , "박민우");
	student.showAll();
	system("pause");
	return 0;
}
