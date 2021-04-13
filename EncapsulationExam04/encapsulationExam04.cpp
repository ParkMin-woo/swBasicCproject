/*
 * encapsulationExam04.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++�� ĸ��ȭ ���]

// ��� ���
#include <iostream>
#include <string>

using namespace std;

class Person {
private :
	const int id;
	string name;
public :
	static int count;
	Person(int id, string name) : id(id) , name(name) {
		count++;
	}

	/*
	 * ���� �߻�(���� �Ұ���)
	void setId(int id) {
		this -> id = id;
	}
	*/
};

int Person::count = 0;

int main(void) {
	Person person1(1 , "�ڹο�");
	Person person2(2 , "��ä��");
	cout << "���� �ο� �� : " << Person::count << "��\n";
	system("pause");
	return 0;
}
