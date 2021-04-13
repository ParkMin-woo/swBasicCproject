/*
 * smartPointerExam05.cpp
 *
 *  Created on: 2021. 4. 13.
 *      Author: Administrator
 */
// [C++의 스마트 포인터 - weak_ptr 사용 예제]
// 출처 : https://hwan-shell.tistory.com/193

#include <iostream>
#include <memory>

using namespace std;

class A {
private :
	int *num;
public :
	A() : num(new int[100]) {}

	~A() {
		cout << "소멸자 호출!!!" << endl;
		delete[] num;
	}

	void print_ptr() {
		printf("%x\n" , num);
	}
};

void fnc(weak_ptr<A> wp) {
	if(shared_ptr<A> temp = wp.lock()) {
		cout << "공유 포인터가 있습니다.\n";
		temp -> print_ptr();
		cout << "(함수 안) 공유된 갯수 : " << wp.use_count() << endl;
	}
	else {
		cout << "공유 포인터가 없습니다.\n";
	}

	cout << "공유된 갯수 : " << wp.use_count() << endl;
}

int main(void) {
	shared_ptr<A> sh_p1 = make_shared<A>();
	shared_ptr<A> sh_p2 = sh_p1;
	weak_ptr<A> wp1 = sh_p1;

	fnc(wp1);
	return 0;
}
