#include<stdio.h>
int main(){
   int A,B,C,K;
   scanf("%d %d %d %d",&A,&B,&C,&K);

if (A >= K){

   printf("%d",K);
}else if (A + B >= K){

   printf("%d",A);
}else{
  
    int  a = A - (K - A - B);
    printf("%d",a);
}
return 0;
}