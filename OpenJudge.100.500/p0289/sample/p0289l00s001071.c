#include<stdio.h>

int main()
{
   int x, y, i, X, Y;

   scanf("%d %d", &x, &y);

   if(x >= y){
      for(i=y; i>=1; i--){
         if(y%i == 0){
            X = x%y;
            if(X%i == 0){
               printf("%d\n", i);
               return 0;
            }
         }
      }
   }

   else if(x <= y){
      for(i=x; i>=1; i--){
         if(x%i == 0){
            Y = y%x;
            if(Y%i == 0){
               printf("%d\n", i);
               return 0;
            }
         }
      }
   }

}