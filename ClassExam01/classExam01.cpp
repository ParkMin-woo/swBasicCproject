/*
 * classExam01.cpp
 *
 *  Created on: 2021. 4. 2.
 *      Author: Administrator
 */
// ����ü�� Ŭ������ ������

#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string name;
	int score;
} Student;

int main(void) {
	Student s;
	s.name = "�ڹο�";
	s.score = 100;
	cout << s.name << " : " << s.score << "��\n";
	system("pause");
	return 0;
}
