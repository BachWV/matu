#include<iostream>
using namespace std;
int main() {
    int step=0;
    double pi, p=0;
    double l = 1.0;
    while (l >= 1e-8) {
        step += 1;
        l =1.0 / (2 * step - 1);
        if (step % 2 != 0) {
            p += l;
        }
        else {
            p -= l;
        }
    }
    pi = p * 4;
    cout << "steps=" << step << ' ';
    cout << "PI=" << pi << endl;
    return 0;
}