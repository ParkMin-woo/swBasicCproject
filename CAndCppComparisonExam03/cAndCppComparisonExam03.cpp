/*
 * cAndCppComparisonExam03.cpp
 *
 *  Created on: 2021. 4. 1.
 *      Author: Administrator
 */
// C++�� ���ӽ����̽�

#include <iostream>

namespace A {
	void function() {
		std::cout << "A namespace" << std::endl;
	}
}

namespace B {
	void function() {
		std::cout << "B namespace" << std::endl;
	}
}

int main(void) {
	A::function();
	B::function();
	system("pause");
	return 0;
}
