#include<stdio.h>

int main( void ){
   int i,j;
   int n;
   int flag = 0;
   scanf("%d", &n);
   for(i = 0; i < 10; i++){
      for(j = 0; j < 10; j++){
         if(n == j*i){
            printf("Yes\n");
            flag = 1;
            break;
         }
      }
      if(flag == 1){
         break;
      }
   }
   return 0;
}
   
