#include<stdio.h>
int main(){
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    if(B<=C||D<=A){
        printf("0");    //ok
    }else if(A<=C){
        if(D<=B){
            printf("%d",D-C);
        }else{
            printf("%d",B-C);
        }
    }else if(C<A){
        if(B<=D){
            printf("%d",B-A);
        }else{
            printf("%d",D-A);
        }
    }
    return 0;
}