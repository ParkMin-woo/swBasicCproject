/*
 * encapsulationExam02.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++의 캡슐화 기법]

// 프렌드 클래스의 활용 사례
// 1. 프렌드 클래스 : 시간 클래스 정의하기
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Time {
	friend class Date;	// Date 클래스에서 Time 클래스를 이용할 수 있음.
private :
	int hour , min , sec;
public :
	void setCurrentTime() {
		time_t currentTime = time(NULL);
		struct tm *p = localtime(&currentTime);
		hour = p -> tm_hour;
		min = p -> tm_min;
		sec = p -> tm_sec;
	}
};

// 2. 프렌드 클래스 : 날짜 클래스 정의 및 사용해보기
class Date {
private :
	int year , month , date;
public :
	Date(int yaer , int month , int date) : year(yaer) , month(month) , date(date) {}
	void show(const Time &t) {
		cout << "지정된 날짜 : " << year << "년 " << month << "월 " << date << "일\n";
		cout << "지정된 시간 : " << t.hour << ":" << t.min << ":" << t.sec << "\n";
	}
};

int main(void) {
	Time time;
	time.setCurrentTime();
	Date date = Date(2021 , 4 , 11);
	date.show(time);
	system("pause");
	return 0;
}
