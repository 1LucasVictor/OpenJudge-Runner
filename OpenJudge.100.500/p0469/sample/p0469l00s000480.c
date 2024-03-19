#include<stdio.h>

int main(){
   int k, a, b;
   scanf("%d", &k);
   scanf("%d %d", &a, &b);
   
   int judge = 0;
   for(int i=a; i<=b; i++){
      if(i % k == 0);
      judge = 1;
   }

   if(judge == 1){
      printf("OK\n");
   } else {
      printf("NG\n");
   }

   return 0;
}
