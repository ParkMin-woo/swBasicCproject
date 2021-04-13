/*
 * constructorExam03.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// C++의 생성자 사용해보기3

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
	/*
	Character(string name , int hp , int damage) {
		this -> name = name;
		this -> ragePoint = 0;
		this -> hp = hp;
		this -> damage = damage;
	}
	*/
	Character(string name, int hp , int damage) : name(name) , ragePoint(0) , hp(hp) , damage(damage) {}
	Character(const Character & other) {
		name = other.name;
		ragePoint = other.ragePoint;
		hp = other.hp;
		damage = other.damage;
	}

	void ragePointUp() {
		ragePoint++;
	}
	void show() {
		cout << name << "[" << ragePoint << "] : " << hp << " " << damage << "\n";
	}
};

int main(void) {
	Character c1 = Character("마린" , 40 , 6);
	c1.ragePointUp();
	Character c2 = Character(c1);
	c2.ragePointUp();
	c1.show();
	c2.show();
	system("pause");
	return 0;
}
