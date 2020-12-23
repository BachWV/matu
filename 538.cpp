#include <iostream>

using namespace std;
int putcout(int i,int j,int num,int *out,int *p,int **s);
void minm(int i, int j, int *p, long long **minMat,int **s);
void solve(int n,int p[],int out[]);
void minm(int i, int j, int *p, long long **minMat,int **s){
    int t;
    int minNum;
    long long *temp=new long long[j-i+1];
    for(t=0;t<j-i;t++){

        temp[t+1]=minMat[i][i+t]+minMat[i+1+t][j]+(long long)p[i-1]*p[i+t]*p[j];

    }
    temp[0]=temp[1];
    minNum=1;
    for(t=2;t<=j-i;t++){
        if(temp[t]<temp[0]){
            temp[0]=temp[t];
            minNum=t;
        }
    }
//cout<<temp[0]<<" "<<minNum+i-1<<endl;
    minMat[i][j]=temp[0];
    s[i][j]=minNum+i-1;
}
int putcout(int i,int j,int num,int *out,int *p,int **s){
    if(j-i>=2){
        int temp=s[i][j];
        //cout<<"s["<<i<<","<<j<<"]="<<temp<<endl;

        //cout<<"-1"<<endl;
        out[num]=-1;num++;
        num=putcout(i,temp,num,out,p,s);
        num=putcout(temp+1,j,num,out,p,s);
        //cout<<"-2"<<endl;
        out[num]=-2;num++;
        return num;

    }else if(j-i==1){
        //cout<<"-1"<<endl;
        out[num]=-1;num++;
        // cout<<i<<endl;
        out[num]=i;num++;
        //cout<<j<<endl;
        out[num]=j;num++;
        //cout<<"-2"<<endl;
        out[num]=-2;num++;
        return num;

    }else if(j==i){
        //cout<<j<<endl;
        out[num]=j;num++;

        return num;}

}
void solve(int n,int p[],int out[]){
    int num=1;//递归计数
    int** s = new int* [n + 1];
    long long** minMat = new long long * [n + 1];
    for (int i = 0; i <= n; i++)
    {
        s[i] = new int[n + 1];
        minMat[i] = new long long[n + 1];
    }
    int i,i0,j;
    for(i=1;i<=n;i++){
        minMat[i][i]=0;
        s[i][i]=0;
    }
    for (i0=1;i0<=n-1;i0++){
        for(i=1;i<=n-i0;i++){
            j=i+i0;
            // cout<<i<<"  "<<j<<endl;
            minm(i,j,p,minMat,s);

        }
    }
    out[0]=minMat[1][n]%1000000007;
    putcout(1,n,num,out,p,s);
}
int main(){
    int n=5;
    //int p[6]={10,5,2,8,6,3};
    int p[6]={3,7,8,5,12,10};
    int out[20];//传出结果

    solve(n,p,out);

    for(int t3=0;t3<=13;t3++){
        cout<<out[t3]<<endl;
    }
    return 0;

}

