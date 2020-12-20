//
// Created by Charon on 2020/12/19.
/*
ClockWithDate类（C++）
通过课程进入	题 号:	155	ClockWithDate类（C++）	语言要求：	C++
引入头文件ClockAndDate.h，它的内容如下：
#include <iostream>
using namespace std;
class Clock{
public:
    Clock(int h,int m,int s){
        hour =(h>23? 0:h);
        minute = (m>59?0:m);
        second = (s>59?0:m);
    }
    virtual void run(){
        second = second+1;
        if (second>59)
        {
            second =0;
            minute+=1;
        }
        if (minute>59)
        {
            minute =0;
            hour+=1;
        }
        if (hour>23)
        {
            hour =0;
        }
    }
    virtual void showTime(){
        cout<<"Now:"<<hour<<":"<<minute<<":"<<second<<endl;
    }
    int getHour(){return hour;}
    int getMinute(){return minute;}
    int getSecond(){return second;}

    Clock * createClockWithDate(int h,int m,int s,int year,int month,int day);
protected:
    int hour;
    int minute;
    int second;
};

class Date{
public:
    Date(int y=1996,int m=1,int d=1){
        day =d;
        year =y;
        month =m;
        if (m>12||m<1)
        {
            m=1;
        }
        if(d>days(y,m)){
            day = 1;
        }
    };
    int days(int year,int month);
    void NewDay();
    void display(){
        cout<<year<<"-"<<month<<"-"<<day<<endl;
    }
protected:
    int year;
    int month;
    int day;
};

需要实现Date类的days方法，根据年和月，返回该年该月对应的天数
        实现Date类的NewDay方法，该方法将Date代表的日期增加一天。

实现ClockWithDate类，它继承至Clock类和Date类，记录时间和日期
        重新实现ClockWithDate类的showTime方法和run方法。
showTime方法输出当的时间和日期，先输出时间再输出日期。
run方法每次将现在的时间增加一秒，并且当时间超过23：59：59时，更新日期。

必须实现Clock类的createClockWithDate方法，它的实现必须在ClockWithDate类的定义之后，它的内容如下：
Clock* Clock::createClockWithDate(int h,int m,int s,int year,int month,int day){
    return new ClockWithDate(h,m,s,year,month,day);
}
*/
#include <iostream>
using namespace std;
class Clock{
public:
    Clock(int h,int m,int s){
        hour =(h>23? 0:h);
        minute = (m>59?0:m);
        second = (s>59?0:m);
    }
    virtual void run(){
        second = second+1;
        if (second>59)
        {
            second =0;
            minute+=1;
        }
        if (minute>59)
        {
            minute =0;
            hour+=1;
        }
        if (hour>23)
        {
            hour =0;
        }
    }
    virtual void showTime(){
        cout<<"Now:"<<hour<<":"<<minute<<":"<<second<<endl;
    }
    int getHour(){return hour;}
    int getMinute(){return minute;}
    int getSecond(){return second;}

    Clock * createClockWithDate(int h,int m,int s,int year,int month,int day);
protected:
    int hour;
    int minute;
    int second;
};

class Date{
public:
    Date(int y=1996,int m=1,int d=1){
        day =d;
        year =y;
        month =m;
        if (m>12||m<1)
        {
            m=1;
        }
        if(d>days(y,m)){
            day = 1;
        }
    };
    int days(int year,int month);
    void NewDay();
    void display(){
        cout<<year<<"-"<<month<<"-"<<day<<endl;
    }
protected:
    int year;
    int month;
    int day;
};
int Date::days(int year, int month) {
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:return 30; break;
        case 2:if (year % 400 == 0 || (year % 4 == 0 && year % 100)) return 29;
            else return 28;

        default:return 31; break;
    }
}
void Date::NewDay() {
    if(day==days(year,month)){
        if(month==12){
            year++;
            month=1;
            day=1;
        }
        else{
            month++;
            day=1;
        }
    }else{
        day++;
    }
}
class ClockWithDate: public Clock, public Date{
public:
    ClockWithDate(int h,int m,int s,int year,int month,int day):Clock(h,m,s),Date(year,month,day){};
    void showTime(){
        Clock::showTime();
        Date::display();
    }
    void run(){
        Clock::run();
        if(hour==0&&minute==0&&second==0){
            Date::NewDay();
        }

    }


};
Clock* Clock::createClockWithDate(int h,int m,int s,int year,int month,int day){
    return new ClockWithDate(h,m,s,year,month,day);
}
int main(){
    ClockWithDate nc(23,59,59,1999,12,31);
    nc.showTime();
nc.run();
nc.showTime();
    return  0;
}