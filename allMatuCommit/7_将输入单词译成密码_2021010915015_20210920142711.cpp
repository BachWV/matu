#include<stdio.h>
int main()
{
char arr[20]={0};
scanf("%s",arr);
arr[20]='\0';

if(arr[0]=='\0') 
    printf("error");
for (int i=0; arr[i]!='\0'; i++)
{
    if(arr[i]>='a' && arr[i]<='z' || arr[i]>='A' && arr[i]<='Z')
    {
        if(arr[i]>'v' || arr[i]>'V' && arr[i]<='Z')
        {        
            arr[i]-= 22;
        }
        else
        {
            arr[i]+=4;
        }
    }
    else
    {
        printf("error");
        return 0;
    }
    
}
printf("%s\n",arr);


return 0;
