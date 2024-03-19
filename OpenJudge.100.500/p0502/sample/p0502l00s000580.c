#include<stdio.h>

int main(void){
   int N,i;
   int y=0;
   int data[1000];
   scanf("%d",&N);
   for(i=0;i<N;i++){
      scanf("%d",&data[i]);
   }
   for(i=0;i<N;i++){
      if(data[i]%2==0){
         if((data[i]%3!=0)&&(data[i]%5)!=0){
            y=1;
         }
      }
   }
         if(y==0){
            printf("APPROVED\n");
         }else{
            printf("DENIED\n");
         }
         return 0;
}
