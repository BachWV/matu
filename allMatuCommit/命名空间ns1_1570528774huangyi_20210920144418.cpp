#include <iostream>
using namespace std;

namespace ns1
{
	namespace ns1 { 	int x = 1; 	int y = 2; 	namespace ns2{ 		char x = 'a'; 		char y = 'b'; 		int add_one(int a) { 			return 1 + a; 		} 	} }
}

int main()
{
	using namespace ns1::ns2;
	cout << ns1::x << "," << ns1::y << endl;
	cout << x << "," << y << endl;
	cout << add_one(10) << endl;
    return 0;
}
