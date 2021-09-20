#include <stdio.h>

extern int cal(int *pData,int iLen)
{
	extern int max_val, min_val, ave_val;
	max_val=min_val=pData[0];
	ave_val=0;
	if(pData!=NULL&&iLen>0)
	{
	    for(int w=0;w<iLen;w++)
		{
		   if(pData[w]>max_val)
		   max_val=pData[w];
		   if(pData[w]<min_val)
		   min_val=pData[w];
		   ave_val+=pData[w];
		}
		ave_val=ave_val/iLen;
		return 1;	
	}
	else
	return 0;
}