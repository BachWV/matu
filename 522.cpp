//522 523 524

#include <iostream>

using namespace std;
template<typename T>
T get_sum(T *a,int num){
    T sum=0;
    for(int i=0;i<num;i++){
        sum+=a[i];
    }
    return sum;
}
/*template<typename T>
T get_min(T *a,int num){
    T temp=a[0];
    for(int i=1;i<num;i++){
        if(temp>a[i]) temp=a[i];
    }
    return temp;
}
template<typename T>
T get_max(T *a,int num){
    T temp=a[0];
    for(int i=1;i<num;i++){
        if(temp<a[i]) temp=a[i];
    }
    return temp;
}*/
int main(){

    int arr_int[6] = { 1, 2, 3, 4, 5, 6 };

    double arr_double[6] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    cout << get_sum(arr_int, 6) << endl;

    cout << get_sum(arr_double, 6) << endl;

    return 0;

}