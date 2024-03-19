#include<stdio.h>

int main(){
int N,A,B,sum;
scanf("%d %d %d",&N,&A,&B);
sum=A*N;
if(sum>=B){
sum=B;
}
printf("%d",sum); 
return 0;
}