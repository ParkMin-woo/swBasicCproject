/*
 * cstlContainerAdapterExam03.cpp
 *
 *  Created on: 2021. 4. 14.
 *      Author: Administrator
 */
// C++ STL 컨테이너 어댑터 : 우선순위 큐

#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	int n , x;
	cin >> n;
	priority_queue<int> pq;
	for(int i = 0 ; i < n ; i++) {
		cin >> x;
		pq.push(x);
	}

	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	system("pause");
	return 0;
}
