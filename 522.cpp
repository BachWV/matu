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
int get_min(int *a,int num){
    int temp=a[0];
    for(int i=1;i<num;i++){
        if(temp>a[i]) temp=a[i];
    }
    return temp;
}
double get_min(double *a,int num){
    double temp=a[0];
    for(int i=1;i<num;i++){
        if(temp>a[i]) temp=a[i];
    }
    return temp;
}

int main(){

    int arr_int[6] = { 1, 2, 3, 4, 5, 6 };

    double arr_double[6] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    cout << get_sum(arr_int, 6) << endl;

    cout << get_sum(arr_double, 6) << endl;

    return 0;

}