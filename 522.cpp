//
// Created by Charon on 2020/12/21.
//

#include <iostream>

using namespace std;

int get_sum(int *a,int num){
    int sum=0;
    for(int i=0;i<num;i++){
        sum+=a[i];
    }
    return sum;
}
double get_sum(double *a,int num){
    double sum=0;
    for(int i=0;i<num;i++){
        sum+=a[i];
    }
    return sum;
}
int main()

{

    int arr_int[6] = { 1, 2, 3, 4, 5, 6 };

    double arr_double[6] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    cout << get_sum(arr_int, 6) << endl;

    cout << get_sum(arr_double, 6) << endl;

    return 0;

}