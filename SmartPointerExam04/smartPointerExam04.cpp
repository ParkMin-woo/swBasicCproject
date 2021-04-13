/*
 * smartPointerExam04.cpp
 *
 *  Created on: 2021. 4. 13.
 *      Author: Administrator
 */
// [C++�� ����Ʈ ������ - shared_ptr ��� ����]
// ��ó : https://hwan-shell.tistory.com/193

#include <iostream>
#include <memory>

using namespace std;

class A {
private :
	int *num;
public :
	A() :num(new int[100]) {}

	~A() {
		cout << "�Ҹ��� ȣ��!!!" << endl;
		delete[] num;
	}

	void print_ptr() {
		printf("%x\n" , num);
	}
};

int main(void) {
	shared_ptr<A> sh_p1 = make_shared<A>();
	shared_ptr<A> sh_p2 = sh_p1;
	sh_p1 -> print_ptr();
	sh_p2 -> print_ptr();
	return 0;
}
