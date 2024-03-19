#include<stdio.h>
#define NUM 1000
int main(){
   int i,N,A[NUM],cnt;
   scanf("%d",&N);
   for(i=0;i<N;i++){
      scanf("%d",&A[i]);
   }
   for(i=0;i<N;i++){
      if (A[i]%2==0){
         if(A[i]%3==0||A[i]%5==0){
            cnt++;
         }
      }
   }
   if(cnt>0){
      printf("APPROVED");
   }else{
      printf("DENIED");
   }
   
   return 0;
}
