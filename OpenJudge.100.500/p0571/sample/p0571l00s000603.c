#include <stdio.h>

int main(){
   int N=0;
   int A=0,B=0;
   scanf("%d %d %d",&N,&A,&B);
   if(N*A>B){
      printf("%d\n",B);
   }
   else{
      printf("%d\n",A*N);
   }

   return 0;
}