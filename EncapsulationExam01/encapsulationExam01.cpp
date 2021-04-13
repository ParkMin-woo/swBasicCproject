/*
 * encapsulationExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++ÀÇ Ä¸½¶È­ ±â¹ý]

// ÇÁ·»µå ÇÔ¼öÀÇ È°¿ë »ç·Ê
#include <iostream>
#include <string>

using namespace std;

class Student {
private :
	int studentId;
	string name;
public :
	Student(int studentId, string name) : studentId(studentId) , name(name) {}
	friend Student operator +(const Student &student , const Student &other) {
		return Student(student.studentId , student.name + " & " + other.name);
	}
	void showName() {
		cout << "ÀÌ¸§ : " << name << "\n";
	}
};

int main(void) {
	Student student(1 , "¹Ú¹Î¿ì");
	Student result = student + student;
	result.showName();
	system("pause");
	return 0;
}
