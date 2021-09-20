#include <iostream>
using namespace std;

namespace ns1
{
	namespace ns1 { 	int x; 	int y; 	namespace ns2{ 		int add_one(int a); 		int add_one(int a) { 			return 1 + a; 		} 		char x ; 		char y ; 	} }
}

int main()
{
	using namespace ns1::ns2;
	cout << ns1::x << "," << ns1::y << endl;
	cout << x << "," << y << endl;
	cout << add_one(10) << endl;
    return 0;
}
