#include<stdio.h>
#include<string.h>
int main()
{
int a[10];
int i,j,k,len,x;
len=0;
k=0;
//???????? 
for(i=0;i<10;i++)
{
x=scanf("%d",&a[i]);
if(a[i]<0||x==0) break;
len++;
}
//???????????????????? 
for(i=0;i<len-1;i++){
	for(j=0;j<len-i-1;j++){
		if(a[j]%2==0){
			k=a[j+1];
			a[j+1]=a[j];
			a[j]=k;
		}
	}
}
//???????????§³??????????? 
//?????? 
for(i=0;i<len-1;i++){
	for(j=0;j<len-i-1;j++){
		if(a[j]>a[j+1]&&a[j]%2&&a[j+1]%2){
			k=a[j+1];
			a[j+1]=a[j];
			a[j]=k;
		}
//????? 
		if(a[j]>a[j+1]&&a[j]%2==0&&a[j+1]%2==0){
			k=a[j+1];
			a[j+1]=a[j];
			a[j]=k;
		}
	}
}
//?????? 
for(i=0;i<len-1;i++)
{
printf("%d ",a[i]);
}
printf("%d\n",a[len-1]);
return 0;
}
