/*
 * classExam03.cpp
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
		this -> name = name;	// �ڱ� �ڽ��� ��� ������ ����
		this -> englishScore = englishScore;
		this -> mathScore = mathScore;
	}
	void show() {
		cout << name << " : [�հ� " << getSum() << "��]\n";
	}
};

int main(void) {
	Student *student = new Student("�ڹο�" , 100 , 90);
	// private ���� �����ڴ� �ܺο��� ������ �� ����.(���� �߻�)
	// cout << student -> getSum();
	student -> show();
	system("pause");
	return 0;
}
