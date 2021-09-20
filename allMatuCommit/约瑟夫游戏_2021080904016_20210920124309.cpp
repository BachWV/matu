#include<iostream>
using namespace std;
int main()
{
int a[10000],c=0,n,m,i,j,k=0;
cin>>n>>j>>m;
if(j==0) cout<<j;
else if(j>=n||m>n||j<0||m<0||n<=0) cout<<"error";
else
{
for(i=1;i<=n;i++)
a[i]=i;
while(j<n-c)
{
	for(i=1;i<=n;i++)
	{
		if(a[i]==0)
		continue;
		k++;
		if(k!=m+1)
		continue;
		k=0;
		c++;
		a[i]=0;
	}
}
for(i=1;i<=n;i++)
if(a[i]==0) continue;
else cout<<a[i]<<",";
}
}