#include <iostream>
using namespace std;

class A :public exception{ public:     int err;     A(int index) {         this->err = index;     } }; class B :exception { public:     int err;     B(int divisor) {         this->err = divisor;     } };

int main()
{
	int index, dividend, divisor, result;
	int array[10]={1,2,3,4,5,6,7,8,9,10};

	try
	{
		cin >> index >> divisor;

		if( index < 0 || index>9)
			throw A(index);	

		if(divisor==0)
			throw B(divisor);

		dividend = array[index];
		result = dividend / divisor;
		cout << result << endl;
	}
	catch(A a)
	{
		cout << a.err << " out of bound" << endl;
	}
	catch(B b)
	{
		cout << "divide by "<< b.err << endl;
	}
	
	return 0;
}
