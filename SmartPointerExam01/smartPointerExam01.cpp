/*
 * smartPointerExam01.cpp
 *
 *  Created on: 2021. 4. 13.
 *      Author: Administrator
 */
// [C++의 스마트 포인터 - unique_ptr 기본 사용법]
// 출처 : https://hwan-shell.tistory.com/193

#include <iostream>
#include <memory>

using namespace std;

class A {

};

int main(void) {
	/*
	unique_ptr<int> p1 = make_unique<int>(10);
	unique_ptr<int> p2;
	cout << "스마트 포인터 1 : " << p1 << "\n";
	cout << "스마트 포인터 2 : " << p2 << "\n";
	cout << "--- 소유권 이전 ---\n";
	p2 = move(p1);	// 소유권 이전
	cout << "스마트 포인터 1 : " << p1 << "\n";
	cout << "스마트 포인터 2 : " << p2 << "\n";
	cout << "--- 메모리 할당 해제 ---\n";
	p2.reset();	// 메모리 할당 해제
	cout << "스마트 포인터 1 : " << p1 << "\n";
	cout << "스마트 포인터 2 : " << p2 << "\n";
	cout << *p1 << "\n";
	*/
	unique_ptr<int []> p1 = make_unique<int []>(10);	// p1 스마트포인터 배열 10개 선언
	p1[0] = 1;
	p1[1] = 2;
	p1[2] = 3;
	unique_ptr<int> p2 = make_unique<int>(5);	// unique_ptr<int> p2(new int(5));
	int *num = new int(10);
	unique_ptr<int> p3(move(num));

	cout << p1[0] << endl;
	cout << *p2 << endl;
	cout << *p3.get() << endl;
	cout << *num << endl;

	p3.reset();		// 가르키고 있는 값 해제
	cout << *num << endl;	// output : 16543968(의미 없는 값, 쓰레기 값)

	unique_ptr<A> a1 = make_unique<A>();
	// unique_ptr<A> a2 = a1;	// 에러 발생
	unique_ptr<A> a3 = move(a1);

	system("pause");
	return 0;
}
