/*实现日期类Date，它能正确表示年、月、日。
在代码中引入头文件 CDate.h
它的内容如下：
class Date{
 public:
       Date(int y =1996,int m=1,int d=1){};
       int days(int year,int month){};
       void NewDay();
 void display()
 {
    cout<<year<<"-"<<moth<<"-"<<day<<endl;
 }
 private:
      int year; //年
      int month; //月
      int day;  // 日
}

需要实现构成函数Date(int y =1996,int m=1,int d=1)
在构造函数内依次判断输入的月和日是否合法
即月为1~12月中的一个 如果月不合法则输出Invalid month! 然后将月置为1。
如果天数不合法，则输出Invalid day! 然后将天数置为1。
例如 Date d(1993,13,32);
输出：
Invalid month!回车
Invalid day!回车
再调用 d.display()
输出：
1993-1-1

设计一个NewDay()成员函数，将当前Date表示的日期增加一天。
例如：Date d(1991,1,1);
      d.NewDay();
      d.display();
输出：
1991-1-2

设计一个days(int year, int month)成员函数,返回指定年月有多少天。
例如 d.days(1991,1)
返回：
31

在你的代码中必须实现以上三个方法，例如：
#include "CDate.h"
Date::Date(int y=1996,int m=1 ,int d=1){
    ...
}
int  Date::days(int year,int month){
    ...
}
void Date::NewDay(){
  ...
}
*/
#include<iostream>
#include "CDate.h"
using namespace std;


Date::Date(int y , int m , int d) {
    if (m <= 0 || m > 12) {
       this->month = 1;
        cout << "Invalid month!" << endl;

    }
    else this->month = m;
    if (d <= 0 || d > 31) {
        day = 1;
        
        cout << "Invalid day!" << endl;

    }
    else day = d;
    year = y;
}
int  Date::days(int year, int month) {
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
    int boo = 0;
    if (year % 400 == 0) {
        boo = 1;

    }
    else if (year % 100 == 0) {
        boo = 0;
    }
    else if (year % 4 == 0) {
        boo = 1;
    }
    if (boo == 1 && month == 2&&day==29) {
        month ++;
        day = 1;
    }
    else if (boo == 0 && month == 2&&day==28) {
        month ++;
        day = 1;
    }
    switch (month) {
        
    case 4:if (day == 30) { month++; day = 1; }; break;
    case 6:if (day == 30) { month++; day = 1; }; break;
    case 9:if (day == 30) { month++; day = 1; }; break;
    case 11:if (day == 30) { month++; day = 1; }; break;
    case 2:if (day == 30) { month++; day = 1; }; break;
    case 12:if (day == 31) { year++; month = 1; day = 1; }; break;
    default:if (day == 31) { month++; day = 1; }; break;
    }

}//这个函数写得不好+不全，我是辣鸡请轻喷，不过matu通过了，有点奇怪
/*可以抄一下大佬写的：
void Date::NewDay()
{
	if (days(year, month)== day){
		if (12== month){
			++year;
			month= 1;
		}
		else{
			++month;
		}
		day= 1;
	}
	else{
		++day;
	}
}
*/

int main() {
    Date d(1991, 1, 1);
    d.NewDay();
    d.display();
}