//#include <iostream>
//using namespace std;
//class Clock{
//public:
//      Clock(int h,int m, int s);
//	  void SetAlarm(int h,int m,int s);
//	  void run();
//	  void ShowTime(){
//		  cout<<"Now:"<<hour<<":"<<minute<<":"<<second<<endl;
//	  }
//private:
//	int hour;   //?
//	int minute;  //??
//	int second;  //??
//	
//	int Ahour;   //????????
//	int Aminute;  //????????
//	int Asecond;   //???????
//};
#include"Clock.h"
Clock::Clock(int h,int m, int s){
	if(0<=h&&h<24&&0<=m&&m<60&&0<=s&&s<60){
		hour=h;
		minute=m;
		second=s;
	}else{
		hour=minute=second=0;
	}
}

void Clock::SetAlarm(int h,int m,int s){
		Ahour=h;
		Aminute=m;
		Asecond=s;
}

void Clock::run(){
	second++;
	if(second==60){
		second=0;
		minute++;
		if(minute==60){
			minute=0;
			hour++;
			if(hour==24) hour=0;
		}
	}
	if(hour==Ahour&&minute==Aminute&&second==Asecond){
		cout<<"Plink!plink!plink!..."<<endl;
	}
}