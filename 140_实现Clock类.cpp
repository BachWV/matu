#include "Clock.h"
#include<iostream>
using namespace std;
Clock::Clock(int h, int m, int s) {
	if (h < 24 && h >= 0)hour = h;
		else hour = 0;
	if (m >= 0 && m < 60) minute = m;
		else minute = 0;
	if (s >= 0 && s < 60) second = s;
		else second = 0;
}
void Clock::SetAlarm(int h, int m, int s) {
	if (h < 24)Ahour = h;
		else hour = 0;
	if (m < 60) Aminute = m;
		else minute = 0;
	if (s < 60) Asecond = s;
		else second = 0;
}

void Clock::run() {
	second++;
	if (second == 60) {
		minute++;
		second = 0;
	}
	if (minute == 60) {
		hour++;
		minute = 0;
	}
	if (hour == 24) {
		hour = 0;

	}
	if (hour == Ahour && minute == Aminute && second == Asecond) {
		cout << "Plink!plink!plink!..." << endl;
	}
}
class Clock {
public:
	
	void ShowTime() {
		cout << "Now:" << hour << ":" << minute << ":" << second << endl;
	}


private:
	int hour;   //Ê±
	int minute;  //·Ö
	int second;  //Ãë

	int Ahour;   //Ê±£¨ÄÖÖÓ£©
	int Aminute;  //·Ö£¨ÄÖÖÓ£©
	int Asecond;   //Ãë£¨ÄÖÖÓ£©
};