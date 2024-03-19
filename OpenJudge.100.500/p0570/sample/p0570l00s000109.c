#include <stdio.h>
 
int main(void){
    long int A,B,K=0,ans,h=0;
    scanf("%ld%ld",&A,&B);
    while(A+B-2*K>=0){
        if((A+B-2*K)==0){
            ans=K;
            h=1;
            break;
           }else{
            K++;
        }
    }
    if(h==1){
        printf("%ld\n",ans);
    }else{
        printf("IMPOSSIBLE");
    }
}