/*
 * cAndCppComparisonExam06.cpp
 *
 *  Created on: 2021. 4. 1.
 *      Author: Administrator
 */
// C++�� ���ڿ� �ڷ���

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string input;
	// cin >> input;
	getline(cin , input);
	for(int i = 0 ; i < input.size() ; i++) {
		cout << input[i] << "\n";
	}
	system("pause");
	return 0;
}