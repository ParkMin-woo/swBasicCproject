/*
 * classExam02.cpp
 *
 *  Created on: 2021. 4. 2.
 *      Author: Administrator
 */
// Ŭ������ ����ü�� ������

#include <iostream>
#include <string>

using namespace std;

class Student {
private :
	string name;
	int score;
public :
	Student(string n, int s) {
		name = n;
		score = s;
	}
	void show() {
		cout << name << " : " << score << "��\n";
	}
};

int main(void) {
	Student *student = new Student("�ڹο�" , 100);
	student -> show();
	system("pause");
	return 0;
}
