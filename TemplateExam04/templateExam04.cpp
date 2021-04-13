/*
 * templateExam04.cpp
 *
 *  Created on: 2021. 4. 12.
 *      Author: Administrator
 */
// [C++의 템플릿]

// 클래스 템플릿 : 디폴트 템플릿 인수
#include <iostream>
#include <string>

using namespace std;

template <typename T = int>

class Data {
private :
	T data;
public :
	Data(T data) : data(data) {}
	void setData(T data) {
		this -> data = data;
	}
	T getData() {
		return data;
	}
};

int main(void) {
	Data<> data1(1);
	Data<string> data2("박민우");
	cout << data1.getData() << " : " << data2.getData() << "\n";
	system("pause");
	return 0;
}
