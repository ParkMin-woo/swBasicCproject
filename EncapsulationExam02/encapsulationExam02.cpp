/*
 * encapsulationExam02.cpp
 *
 *  Created on: 2021. 4. 11.
 *      Author: Administrator
 */
// [C++�� ĸ��ȭ ���]

// ������ Ŭ������ Ȱ�� ���
// 1. ������ Ŭ���� : �ð� Ŭ���� �����ϱ�
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Time {
	friend class Date;	// Date Ŭ�������� Time Ŭ������ �̿��� �� ����.
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

// 2. ������ Ŭ���� : ��¥ Ŭ���� ���� �� ����غ���
class Date {
private :
	int year , month , date;
public :
	Date(int yaer , int month , int date) : year(yaer) , month(month) , date(date) {}
	void show(const Time &t) {
		cout << "������ ��¥ : " << year << "�� " << month << "�� " << date << "��\n";
		cout << "������ �ð� : " << t.hour << ":" << t.min << ":" << t.sec << "\n";
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
