int main(){
    int x,i;
    scanf("%d",&x);
    //avoid the erroneous input
    if (x<=3){
        printf("error");
    }else{
         int isprime=1;
         for(i=2;i<x;i++){
           if(x%i==0){
            isprime=0;
            }break;
            }//????isprime????????printf???????
            if(isprime==1){
            printf("yes");
            }else{
            printf("no");
            }
    }
    return 0;
}
