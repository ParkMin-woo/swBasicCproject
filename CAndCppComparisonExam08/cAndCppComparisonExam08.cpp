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
	arr = new int[SIZE];	// ���� �Ҵ�
	for(int i = 0 ; i < SIZE ; i++) {
		arr[i] = i;
	}
	for(int i = 0 ; i < SIZE ; i++) {
		cout << i << "  ";
	}
	delete arr;	// �Ҵ� ����
	system("pause");
	return 0;
}
