#include<stdio.h>

int main(void){
   int N;
   int p;
   scanf("%d",&N);
   if(N%2==0){
      p=N/2;
   }else if(N%2==1){
      p=N/2+1;
   }
   printf("%d",p);
   return 0;
}
