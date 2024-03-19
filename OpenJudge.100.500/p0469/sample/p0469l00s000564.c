#include<stdio.h>

int main(){
   int A,B,K;
   int cnt=0;
   scanf("%d",&K);
   scanf("%d%d",&A,&B);
   if(A>=1&&A<=B&&B<=1000&&1<=K&&K<=1000){
      for(int i=A;i<=B;i++){
         if(i%K==0){
            printf("OK");
            cnt++;
            break;
         }
      }
      if(cnt==0){
         printf("NG");
      }
   }
   return 0;
}