#include<stdio.h>

int Bis(int a, int b, int c){
  int i;
  int sum = 0;

   for(i = 1; i <= c; i++){
     if(i % a == 0){
       sum += b;
     }
   }
   printf("%d\n",sum);

}

int main(){

  int A,B,T;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&T);
  
  Bis(A,B,T);

  return 0;
  

}