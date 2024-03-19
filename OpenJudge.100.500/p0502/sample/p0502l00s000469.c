#include<stdio.h>
#include<stdbool.h>

int main(void){
   int N;
   scanf("%d",&N);
   int n[N];
   bool judge=true;
   for(int i=0;i<N;i++){
      scanf("%d",&n[i]);
   }
   for(int i=0;i<N;i++){
      if(n[i]%2==0){
         if(n[i]%3==0||n[i]%5==0){
      }else{
         judge=false;
         break;
      }
      }
   }
   if(judge){
      printf("APPROVED");
   }else{
      printf("DENIED");
   }
   return 0;
}
