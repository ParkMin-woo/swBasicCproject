/*
 * constructorExam02.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */

// C++의 생성자 사용해보기1

#include <iostream>
#include <string>

using namespace std;

class Character {
private :
	string name;
	int ragePoint;
	int hp;
	int damage;
public :
	void show() {
		cout << name << "[" << ragePoint << "] : " << hp << " " << damage << "\n";
	}
};

int main(void) {
	Character c1 = Character();
	c1.show();
	system("pause");
	return 0;
}
