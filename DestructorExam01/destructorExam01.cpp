/*
 * destructorExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// 생성자와 소멸자 사용 예제

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
	~Character() {
		cout << "객체가 소멸됩니다." << "\n";
	}

	void ragePointUp() {
		ragePoint++;
	}
	void show() {
		cout << name << "[" << ragePoint << "] : " << hp << " " << damage << "\n";
	}
};

int main(void) {
	Character *c1 = new Character("마린" , 40 , 6);
	c1 -> ragePointUp();
	Character c2(*c1);
	c2.ragePointUp();
	c1 -> show();
	c2.show();

	delete c1;	// 동적 할당을 이용했으므로 성공적으로 소멸됨.
	delete &c2;	// 동적 할당을 이용하지 않았으므로 오류가 발생함.
	system("pause");
	return 0;
}
