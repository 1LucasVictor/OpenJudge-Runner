#include <stdio.h>

int main(){
   int x, y;
   scanf("%d%d", &x, &y);
   int a, b;
   for(a = 0; a <= x; a++){
       b = x - a;
       if(y == 2*a + 4*b){
          printf("Yes\n"); 
          return 0;
        }
   }
   printf("No\n");
   return 0;
}