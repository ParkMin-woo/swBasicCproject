/*
 * cstlAssociateContainerExam02.cpp
 *
 *  Created on: 2021. 4. 14.
 *      Author: Administrator
 */
// C++ STL ���� �����̳� : ��(Map)
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	map<string , int> m;
	m["�ڹο�"] = 1; m["������"] = 2; m["������"] = 3;
	map<string , int> :: iterator iter;
	iter = m.begin();
	for( ; iter != m.end() ; iter++ ) {
		cout << iter -> first << " : " << iter -> second << "\n";
	}
	m["��ä��"] = 4;
	cout << m["���� ���"] << "\n";
	iter = m.begin();
	for( ; iter != m.end() ; iter++ ) {
		cout << iter -> first << " : " << iter -> second << "\n";
	}
	system("pause");
	return 0;
}
