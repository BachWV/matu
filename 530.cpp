//
// Created by Charon on 2021/1/3.
//补充下列程序的代码，使得程序的输出为：
//1,2
//a,b
//11
//12
#include <iostream>

using namespace std;

namespace nsA{
    int x=1,y=2;
    int add_something(int x){
        return x+1;
    }

    namespace nsB{
        char x='a',y='b';
        int add_something(int x){
            return x+2;
        }
    }

}

int main()

{

    using namespace nsA;

    cout << x << "," << y << endl;

    cout << nsA::nsB::x << "," << nsA::nsB::y << endl;

    cout << add_something(10) << endl;

    cout << nsA::nsB::add_something(10) << endl;

    return 0;

}

