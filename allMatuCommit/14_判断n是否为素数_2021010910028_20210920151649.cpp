#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	int r = scanf("%d",&a);
	if(r==0)
	 printf("error");
	 else{
	 	if(a<=100){
		 
	for(b=2;b<=a;b++)
	{
		if(a%b==0)
		break;
	}
	if(a==b)
	printf("yes");
	else printf("no");}
	else{
		for(c=2;c<=100;c++)
		{
			if(a%c==0){
			printf("no");
			break;}
			else{
		
			printf("yes");
			break;	}
			
		}
		
	}
	
	}
	
	return 0;
	
} 
