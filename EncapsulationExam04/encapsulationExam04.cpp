/*
 * encapsulationExam04.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++의 캡슐화 기법]

// 상수 멤버
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
	 * 오류 발생(수정 불가능)
	void setId(int id) {
		this -> id = id;
	}
	*/
};

int Person::count = 0;

int main(void) {
	Person person1(1 , "박민우");
	Person person2(2 , "한채희");
	cout << "현재 인원 수 : " << Person::count << "명\n";
	system("pause");
	return 0;
}
