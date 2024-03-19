#include<stdio.h>
#include <stdbool.h>

int main(){
   int x, y;
   bool judge = false;
   scanf("%d %d", &x, &y);
   
   for(int i=0; i<=x; i++){
      if(y == 2*i + 4*(x-i)){
         judge = true;
      }
   }
   if(judge){
      printf("Yes\n");
   } else {
      printf("No\n");
   }

   return 0;
}

