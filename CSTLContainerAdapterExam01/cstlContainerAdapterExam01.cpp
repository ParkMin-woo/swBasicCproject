/*
 * cstlContainerAdapterExam01.cpp
 *
 *  Created on: 2021. 4. 14.
 *      Author: Administrator
 */
// C++ STL 컨테이너 어댑터 : 스택

#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> s;
	s.push(7);
	s.push(5);
	s.push(4);
	s.pop();
	s.push(6);
	s.pop();
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
	system("pause");
	return 0;
}
