#include <stdio.h>

int main(void){
   
   int i;
   int N = 5;
   int Antena[N];
   
   for(i = 0;i < N;i++){
      scanf("%d",&Antena[i]);
   }
   
   int k;
   scanf("%d",&k);
   
   int j;
   int flag = 0;
   for(i = 0;i < N;i++){
      for(j = i + 1;j < N;j++){
         if(abs(Antena[i] - Antena[j]) > k){
            flag = 1;
            break;
         }
      }
   }
   
   if(flag == 1){
      printf(":(\n");
   }
   else {
      printf("Yay!\n");
   }
   
   
   
   return 0;
}
