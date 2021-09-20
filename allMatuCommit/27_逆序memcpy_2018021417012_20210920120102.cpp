#include<stdio.h>
void *reversememcpy(void *destination,const void *source,int num)
{
    char *des=(char*)destination,*src=(char*)source;
    int i;
    if(des==NULL||src==NULL||num<=0){
    printf("error");
    return NULL;
    }  
    for(i=0;i<num;++i)
        des[num-i-1]=src[i];
    return (void*)des;
}