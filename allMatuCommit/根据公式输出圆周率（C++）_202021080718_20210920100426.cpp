#include<iostream>
#include<math.h>

using namespace std;
int main() {
    int step=0;
    double pi, p=0,sign=1;
    double l = 1.0;
    while (fabs(l) >= 1e-8) {
        step += 1;
        l =1.0 / (2 * step - 1);
        p += sign*l;
        sign = -sign;
        /*
        if (step % 2 != 0) {
            p += l;
        }
        else {
            p -= l;
        }*/
    }
    pi = p * 4;
    cout << "steps=" << step << ' ';
    cout << "PI=" << pi << endl;
    return 0;
}
