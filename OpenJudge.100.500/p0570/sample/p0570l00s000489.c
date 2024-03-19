#include<stdio.h>
int main(){
int A,B,K;
scanf("%d %d",&A,&B);
K=(A+B)/2;
if((A%2==0)&&(B%2==0)||(A%2!=0)&&(B%2!=0))
    printf("%d",K);
else
    printf("IMPOSSIBLE");
}
