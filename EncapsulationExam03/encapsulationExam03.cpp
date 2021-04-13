/*
 * encapsulationExam03.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++ÀÇ Ä¸½¶È­ ±â¹ý]

// Á¤Àû ¸â¹ö
#include <iostream>
#include <string>

using namespace std;

class Person {
private :
	string name;
public :
	static int count;
	Person(string name) : name(name) {
		count++;
	}
};

int Person::count = 0;

int main(void) {
	Person person1("¹Ú¹Î¿ì");
	Person person2("ÇÑÃ¤Èñ");
	Person person3("°­Èñ¾Ö");
	cout << "ÇöÀç ÀÎ¿ø ¼ö : " << Person::count << "¸í\n";
	system("pause");
	return 0;
}
