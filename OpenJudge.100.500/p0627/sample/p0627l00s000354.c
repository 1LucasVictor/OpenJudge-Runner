#include<stdio.h>

int main(void){

int A,B,x;
scanf("%d%d",&A,&B);
x=A-B;

if(x<A+B)x=A+B;
if(x<A*B)x=A*B;

printf("%d",x);




return 0 ;
}
