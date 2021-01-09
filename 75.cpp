//基于534约瑟夫游戏的的改进，注意两者的M不一样，需要实现的目的也不一样
//而且有一个验证整数的操作，考虑到matu的输入范例a 1 3
#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct LNode {
    int data;
    struct LNode* next;
}Node;
int* solve(int N, int M, int K) {
    int* a = new int[N - K];
    int j = 0;
    Node* L = new Node;
    Node* r = L;
    for (int i = 1; i <= N; i++) {
        Node* p = new Node;
        p->data = i;
        p->next = NULL;
        r->next = p;
        r = r->next;
    }

    r->next = L->next;
    int nowNum = N;
    r = L;
    while (nowNum > K) {

        for (int i = 0; i < M - 1; i++) {
            r = r->next;

        }
        a[j] = r->next->data;
        j++;
        r->next = r->next->next;
        nowNum--;
    }
    int *rec=new int[N+1]();
    for(int i5=0;i5<N-K;i5++){
        rec[a[i5]]=1;

    }
    int i7=0;
    for(int i6=1;i6<=N;i6++){
        if(rec[i6]==0){
            i7++;
            if(i7==K){
                cout<<i6;
            }else{ cout<<i6<<",";}

        }
    }

    return a;
}
int main() {
    double N, K, M;
    cin>>N>>K>>M;
    M=M+1;
    if (K == 0) {
        printf("0");
        return 0;
    }
    if (K<=0||N<0||M <0||K>N||(K-(int)K!=0)||(M!=(int)M)||(N!=(int)N)) {
        printf("ERROR");
        return 0;
    }

    int n,k,m;
    n=(int)N;
    k=(int)K;
    m=(int)M;
    // N = 8, M = 4, K = 4;
    int* a = solve(n, m, k);
    return 0;
}