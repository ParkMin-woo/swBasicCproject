/*
 * cstlAssociateContainerExam01.cpp
 *
 *  Created on: 2021. 4. 14.
 *      Author: Administrator
 */
// C++ STL 연관 컨테이너 : 집합(Set)

#include <iostream>
#include <set>

using namespace std;

int main(void) {
	int array[5] = {2 , 4 , 6 , 8 , 10};
	set<int> s(array , array + 5);
	set<int> :: iterator iter;
	iter = s.begin();
	for( ; iter != s.end() ; iter++ ) {
		cout << *iter << " ";
	}
	cout << "\n";
	s.insert(1);
	s.insert(3);
	s.insert(5);
	iter = s.begin();
	for( ; iter != s.end() ; iter++ ) {
		cout << *iter << " ";
	}
	cout << "\n";
	system("pause");
	return 0;
}
