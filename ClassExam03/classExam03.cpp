/*
 * classExam03.cpp
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
	int englishScore;
	int mathScore;
	int getSum() {
		return englishScore + mathScore;
	}
public :
	Student(string name, int englishScore , int mathScore) {
		/*
		name = n;
		englishScore = e;
		mathScore = m;
		*/
		this -> name = name;	// 자기 자신의 멤버 변수에 접근
		this -> englishScore = englishScore;
		this -> mathScore = mathScore;
	}
	void show() {
		cout << name << " : [합계 " << getSum() << "점]\n";
	}
};

int main(void) {
	Student *student = new Student("박민우" , 100 , 90);
	// private 접근 한정자는 외부에서 접근할 수 없음.(오류 발생)
	// cout << student -> getSum();
	student -> show();
	system("pause");
	return 0;
}
