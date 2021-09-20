#include"Clock.h"
Clock::Clock(int h,int m, int s){
	if(0<=h&&h<24) hour=h;
	else hour=0;
	if(0<=m&&m<60) minute=m;
	else minute=0;
	if(0<=s&&s<60) second=s;
	else second=0;
}

void Clock::SetAlarm(int h,int m,int s){
	if(h<24) Ahour=h;
	else Ahour=0;
	if(m<60) Aminute=m;
	else Aminute=0;
	if(s<60) Asecond=s;
	else Asecond=0;
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