/*
 * destructorExam01.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// �����ڿ� �Ҹ��� ��� ����

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
		cout << "��ü�� �Ҹ�˴ϴ�." << "\n";
	}

	void ragePointUp() {
		ragePoint++;
	}
	void show() {
		cout << name << "[" << ragePoint << "] : " << hp << " " << damage << "\n";
	}
};

int main(void) {
	Character *c1 = new Character("����" , 40 , 6);
	c1 -> ragePointUp();
	Character c2(*c1);
	c2.ragePointUp();
	c1 -> show();
	c2.show();

	delete c1;	// ���� �Ҵ��� �̿������Ƿ� ���������� �Ҹ��.
	delete &c2;	// ���� �Ҵ��� �̿����� �ʾ����Ƿ� ������ �߻���.
	system("pause");
	return 0;
}
