#include<stdio.h>
signed main(){
    int K,A,B,a;
    a=0;
    scanf("%d %d %d",&K,&A,&B);
    while(A!=B+1){
        if(A%K==0){
            a++;
        }
        A++;
    }
    if(a>0){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    return(0);
}