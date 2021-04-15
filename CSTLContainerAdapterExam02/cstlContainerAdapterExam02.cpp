/*
 * cstlContainerAdapterExam02.cpp
 *
 *  Created on: 2021. 4. 14.
 *      Author: Administrator
 */
// C++ STL 컨테이너 어댑터 : 큐

#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	queue<int> q;
	q.push(7);
	q.push(5);
	q.push(4);
	q.pop();
	q.push(6);
	q.pop();

	while(!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	system("pause");
	return 0;
}
