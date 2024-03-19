#include<stdio.h>
#include<stdlib.h>
int main(){

    int A,B,r,l,K;

    scanf("%d%d",&A,&B);

    K=(A+B)/2;
    r=A-K;
    l=B-K;
    if(r<0){
    r=-1*r;
    }
    if(l<0){
        l=-1*l;
    }
    if(r==l){
        printf("%d",K);
    }
    else{printf("IMPOSSIBLE");}

    return 0;

}
