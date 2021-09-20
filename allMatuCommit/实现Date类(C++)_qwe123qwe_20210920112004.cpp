#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<string.h>
#include<math.h>
#include<cmath>

using namespace std;
typedef long long int ll;
int isrun(int y)
{
	if (y%400==0 || (y%100!=0 && y%4==0))
	{
		return 1;
	}
	return 0;
}

int f[13]={0,31,28,31,30,31,30,31,
			31,30,31,30,31};
			
class Date{
	private :
		int year, month, day;
	public :

			Date(int y=1996,int m=1,int d=1)
			{
				year=y;
				if (m<=0 || m >12 ){
				cout<<"Invalid month!\n";
				month=1;
				
				}
				else month=m;
				
				
				if (m==2)
				{
					if (d<=0 || d>f[month]+isrun(y))
					{
						cout<<"Invalid day!\n";
						day=1;
					}
					else day=d;
				}
				else
				{
					if (d<=0 || d>f[month] )
					{
						cout<<"Invalid day\n";
						day=1;
					}
					else day=d;
				}

			
			}
			
			
			void display()
			{
			    cout<<year<<"-"<<month<<"-"<<day<<endl;
			}
			
			int days(int y,int m)
			{
				if (m<=0 || m>12)
				{
					m=1;
				}
				
				return f[m]+isrun(y);
			}
			
			void NewDay()
			{
				if (month==2)
				{
					if (day==f[month]+isrun(year))
					{
						day=1;
						month++;

					}
					else
					{
						day++;
					}
				}
				else
				{
					if (day==f[month])
					{
						day=1;
						month++;
						if (month==13)
						{
							year++;month=1;
						}

					}
					else day++;
				}
			}

};
int main()
{
//	Date x;
	Date x(1600,13,32);
	x.display() ;
	x.NewDay() ;
	x.display() ;
	cout<<x.days(1700,12)<<endl;
	
	return 0;
}