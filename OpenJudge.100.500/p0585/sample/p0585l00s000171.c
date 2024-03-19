#include<stdio.h>
int main(void){
    int A,B,T;
    int Biscuit=0;
    scanf("%d%d%d",&A,&B,&T);
    Biscuit = T / A;
    Biscuit *= B;
    printf("%d\n",Biscuit);

    return 0;
}