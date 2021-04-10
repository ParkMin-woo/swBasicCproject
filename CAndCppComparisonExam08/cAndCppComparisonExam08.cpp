/*
 * cAndCppComparisonExam08.cpp
 *
 *  Created on: 2021. 4. 1.
 *      Author: Administrator
 */
#include <iostream>
#define SIZE 1000

using namespace std;

int *arr;

int main(void) {
	arr = new int[SIZE];	// 동적 할당
	for(int i = 0 ; i < SIZE ; i++) {
		arr[i] = i;
	}
	for(int i = 0 ; i < SIZE ; i++) {
		cout << i << "  ";
	}
	delete arr;	// 할당 해제
	system("pause");
	return 0;
}
