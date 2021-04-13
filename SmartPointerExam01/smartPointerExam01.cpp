/*
 * smartPointerExam01.cpp
 *
 *  Created on: 2021. 4. 13.
 *      Author: Administrator
 */
// [C++�� ����Ʈ ������ - unique_ptr �⺻ ����]
// ��ó : https://hwan-shell.tistory.com/193

#include <iostream>
#include <memory>

using namespace std;

class A {

};

int main(void) {
	/*
	unique_ptr<int> p1 = make_unique<int>(10);
	unique_ptr<int> p2;
	cout << "����Ʈ ������ 1 : " << p1 << "\n";
	cout << "����Ʈ ������ 2 : " << p2 << "\n";
	cout << "--- ������ ���� ---\n";
	p2 = move(p1);	// ������ ����
	cout << "����Ʈ ������ 1 : " << p1 << "\n";
	cout << "����Ʈ ������ 2 : " << p2 << "\n";
	cout << "--- �޸� �Ҵ� ���� ---\n";
	p2.reset();	// �޸� �Ҵ� ����
	cout << "����Ʈ ������ 1 : " << p1 << "\n";
	cout << "����Ʈ ������ 2 : " << p2 << "\n";
	cout << *p1 << "\n";
	*/
	unique_ptr<int []> p1 = make_unique<int []>(10);	// p1 ����Ʈ������ �迭 10�� ����
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

	p3.reset();		// ����Ű�� �ִ� �� ����
	cout << *num << endl;	// output : 16543968(�ǹ� ���� ��, ������ ��)

	unique_ptr<A> a1 = make_unique<A>();
	// unique_ptr<A> a2 = a1;	// ���� �߻�
	unique_ptr<A> a3 = move(a1);

	system("pause");
	return 0;
}
