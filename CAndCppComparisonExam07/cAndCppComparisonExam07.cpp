/*
 * cAndCppComparisonExam07.cpp
 *
 *  Created on: 2021. 4. 1.
 *      Author: Administrator
 */
// C++�� ���ڿ� �ڷ���

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int i = 123;
	string s = to_string(i);
	cout << "���� -> ���ڿ� " << s << endl;
	s = "456";
	i = stoi(s);
	cout << "���ڿ� -> ���� " << i << endl;
	system("pause");
	return 0;
}
