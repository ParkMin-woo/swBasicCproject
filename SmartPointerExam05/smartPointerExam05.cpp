/*
 * smartPointerExam05.cpp
 *
 *  Created on: 2021. 4. 13.
 *      Author: Administrator
 */
// [C++�� ����Ʈ ������ - weak_ptr ��� ����]
// ��ó : https://hwan-shell.tistory.com/193

#include <iostream>
#include <memory>

using namespace std;

class A {
private :
	int *num;
public :
	A() : num(new int[100]) {}

	~A() {
		cout << "�Ҹ��� ȣ��!!!" << endl;
		delete[] num;
	}

	void print_ptr() {
		printf("%x\n" , num);
	}
};

void fnc(weak_ptr<A> wp) {
	if(shared_ptr<A> temp = wp.lock()) {
		cout << "���� �����Ͱ� �ֽ��ϴ�.\n";
		temp -> print_ptr();
		cout << "(�Լ� ��) ������ ���� : " << wp.use_count() << endl;
	}
	else {
		cout << "���� �����Ͱ� �����ϴ�.\n";
	}

	cout << "������ ���� : " << wp.use_count() << endl;
}

int main(void) {
	shared_ptr<A> sh_p1 = make_shared<A>();
	shared_ptr<A> sh_p2 = sh_p1;
	weak_ptr<A> wp1 = sh_p1;

	fnc(wp1);
	return 0;
}
