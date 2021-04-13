/*
 * smartPointerExam02.cpp
 *
 *  Created on: 2021. 4. 13.
 *      Author: Administrator
 */
// [C++�� ����Ʈ ������ - unique_ptr���� Memory Leak�� �߻��� ���]
// ��ó : https://hwan-shell.tistory.com/193

#include <iostream>
#include <memory>

using namespace std;

class A {
private :
	int *num;
public :
	A() : num(new int[100]) {
		for(int i = 0 ; i < 100 ; i++) {
			num[i] = i;
		}
	}

	~A() {
		cout << "�Ҹ��� ȣ��!!" << endl;
		delete[] num;
	}

	int* return_ptr() {
		return num;
	}
};

int* fnc1() {
	// delete ȣ�� ����!
	A *a = new A();
	int *p = a -> return_ptr();

	cout << p[10] << endl;
	// delete a;
	return p;
}

int main(void) {
	int *p = fnc1();
	cout << p[10] << endl;
	return 0;
}
