/*
 * inheritanceExam03.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++의 클래스 상속 예제 03]

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

// 다중 상속 : 부모 클래스 하나 더 정의하기
class Tmp {
public :
	void showTmp() {
		cout << "임시 부모 클래스입니다.\n";
	}
};

// 오버라이딩 : 자식 클래스 정의 및 사용하기
class Student : Person , public Tmp {
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
	void showName() {
		cout << "학생 이름 : " << getName() << "\n";
	}
};

int main(void) {
	Student student(1 , "박민우");
	// student.showAll();
	student.showName();
	student.showTmp();
	system("pause");
	return 0;
}
