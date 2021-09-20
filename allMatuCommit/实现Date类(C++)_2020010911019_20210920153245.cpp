#include"CDate.h"
int Date::days(int y,int m){
	int ans[12]={31,31,28,31,30,31,30,31,31,30,31,30};
	int a,b;
	a=y,b=m;
	int f=0;
	if(!(a%400)) f=1;
	else if(!(a%100));
	else if(!(a%4)) f=1;
	if(b==2)return ans[b]+f;
	else return ans[b];
}
Date::Date(int y,int m ,int d){
    year=y;
    if(m>12||m<=0) {
    	month=1;
    	cout<<"Invalid month!\n";
	}
    else month=m;
    int mxd=days(year,month);
    if(d>mxd||d<=0){
    	day=1;	
    	cout<<"Invalid day!\n";
	} 
    else day=d;
}
void Date::NewDay(){
	int mxd=days(year,month);
	day++;
	if(day>mxd){
		day=1;
		month++;
		if(month>12){
			month=1;
			year++;
		}
	}
}