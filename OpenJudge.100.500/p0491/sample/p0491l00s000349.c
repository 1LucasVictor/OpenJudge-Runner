#include<stdio.h>

main(void){
    long n,k,tmp,a;
    scanf("%1d %1d",&n,&k);
    
    if(n>k){
        if(n%k<k/2){
            a=n%k;
        }else{
            a=k-(n%k);
        }
    }else if(n<k){
        if(n>k/2){
            a=k-n;
        }else{
            a=n;
        }
    }else if(n=k){
        a=0;
    }
    printf("%1d",a);
    return 0;
}