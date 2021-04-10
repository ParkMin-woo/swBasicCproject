/*
 * classExam02.cpp
 *
 *  Created on: 2021. 4. 2.
 *      Author: Administrator
 */
// 클래스와 구조체의 차이점

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
		cout << name << " : " << score << "점\n";
	}
};

int main(void) {
	Student *student = new Student("박민우" , 100);
	student -> show();
	system("pause");
	return 0;
}
