/*
 * constructorExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// C++�� ������ ����غ���1

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
	Character(string name , int hp , int damage) {
		this -> name = name;
		this -> ragePoint = 0;
		this -> hp = hp;
		this -> damage = damage;
	}
	void show() {
		cout << name << "[" << ragePoint << "] : " << hp << " " << damage << "\n";
	}
};

int main(void) {
	Character c1 = Character("����" , 40 , 6);
	c1.show();
	system("pause");
	return 0;
}
