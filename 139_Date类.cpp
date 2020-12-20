/*ʵ��������Date��������ȷ��ʾ�ꡢ�¡��ա�
�ڴ���������ͷ�ļ� CDate.h
�����������£�
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
      int year; //��
      int month; //��
      int day;  // ��
}

��Ҫʵ�ֹ��ɺ���Date(int y =1996,int m=1,int d=1)
�ڹ��캯���������ж�������º����Ƿ�Ϸ�
����Ϊ1~12���е�һ�� ����²��Ϸ������Invalid month! Ȼ������Ϊ1��
����������Ϸ��������Invalid day! Ȼ��������Ϊ1��
���� Date d(1993,13,32);
�����
Invalid month!�س�
Invalid day!�س�
�ٵ��� d.display()
�����
1993-1-1

���һ��NewDay()��Ա����������ǰDate��ʾ����������һ�졣
���磺Date d(1991,1,1);
      d.NewDay();
      d.display();
�����
1991-1-2

���һ��days(int year, int month)��Ա����,����ָ�������ж����졣
���� d.days(1991,1)
���أ�
31

����Ĵ����б���ʵ�������������������磺
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

}//�������д�ò���+��ȫ���������������磬����matuͨ���ˣ��е����
/*���Գ�һ�´���д�ģ�
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