/*
 * cAndCppComparisonExam05.cpp
 *
 *  Created on: 2021. 4. 1.
 *      Author: Administrator
 */
// C++의 문자열 자료형

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string input;
	cin >> input;
	for(int i = 0 ; i < input.size() ; i++) {
		cout << input[i] << "\n";
	}
	system("pause");
	return 0;
}
