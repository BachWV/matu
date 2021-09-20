#include <stdio.h>
#include <string.h>
#include <math.h>
int fun(const char *p,int result[])
{
	int i=0;
	int j=strlen(p);
	int w=sizeof(result);
	int flag=1;
	if(p!=NULL&&w>=4)
	{
		result[0]=result[1]=result[2]=result[3]=0;
		for(;i<j;i++)
		{
			if(p[i]>='0'&&p[i]<='9')
			{
				if(i<4)
				{
					result[0]+=(p[3-i]-48)*pow(10,double(i));
				}
				if(i>=4&&i<6)
				{
					result[1]+=(p[i]-48)*pow(10,double(5-i));
				}
				if(i>=6&&i<10)
				{
					result[2]+=(p[i]-48)*pow(10,double(9-i));
				}
				if(i>=10&&i<13)
				{
					result[3]+=(p[i]-48)*pow(10,double(12-i));
				}
			}
			else
			{   
			    flag=0;
				break;
			}
		}
		if(flag==0)
		return 0;
		else
		return 1;
	}
	else
	{
		return 0;
	}
}
