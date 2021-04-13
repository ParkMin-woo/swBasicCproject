/*
 * templateExam03.cpp
 *
 *  Created on: 2021. 4. 12.
 *      Author: Administrator
 */
// [C++ÀÇ ÅÛÇÃ¸´]

// Å¬·¡½º ÅÛÇÃ¸´
#include <iostream>
#include <string>

using namespace std;

template <typename T>

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
	Data<int> data1(1);
	Data<string> data2("¹Ú¹Î¿ì");
	cout << data1.getData() << " : " << data2.getData() << "\n";
	system("pause");
	return 0;
}
