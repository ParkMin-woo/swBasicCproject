/*
 * classExam01.cpp
 *
 *  Created on: 2021. 4. 2.
 *      Author: Administrator
 */
// 구조체와 클래스의 차이점

#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string name;
	int score;
} Student;

int main(void) {
	Student s;
	s.name = "박민우";
	s.score = 100;
	cout << s.name << " : " << s.score << "점\n";
	system("pause");
	return 0;
}
