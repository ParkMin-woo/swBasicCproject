/*
 * smartPointerExam02.cpp
 *
 *  Created on: 2021. 4. 13.
 *      Author: Administrator
 */
// [C++의 스마트 포인터 - unique_ptr에서 Memory Leak가 발생한 경우]
// 출처 : https://hwan-shell.tistory.com/193

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
		cout << "소멸자 호출!!" << endl;
		delete[] num;
	}

	int* return_ptr() {
		return num;
	}
};

int* fnc1() {
	// delete 호출 안함!
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
