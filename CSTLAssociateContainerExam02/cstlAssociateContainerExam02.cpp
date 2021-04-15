/*
 * cstlAssociateContainerExam02.cpp
 *
 *  Created on: 2021. 4. 14.
 *      Author: Administrator
 */
// C++ STL 연관 컨테이너 : 맵(Map)
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	map<string , int> m;
	m["박민우"] = 1; m["최정아"] = 2; m["이정하"] = 3;
	map<string , int> :: iterator iter;
	iter = m.begin();
	for( ; iter != m.end() ; iter++ ) {
		cout << iter -> first << " : " << iter -> second << "\n";
	}
	m["한채희"] = 4;
	cout << m["없는 사람"] << "\n";
	iter = m.begin();
	for( ; iter != m.end() ; iter++ ) {
		cout << iter -> first << " : " << iter -> second << "\n";
	}
	system("pause");
	return 0;
}
