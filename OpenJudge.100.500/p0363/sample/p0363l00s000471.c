#include<stdio.h>
   int main(void){
      int a,b,c,tmp;

      scanf("%d %d %d",&a,&b,&c);

      if(a<=b){
         tmp = b;
         b = a;
         a = tmp;
      }
      if(b<=c){
         tmp = c;
         c = b;
         b = tmp;
      }
      if(c<=a){
         tmp = a;
         a = c;
         c = tmp;
      }

      printf("%d %d %d\n",a,b,c);

      return 0;
   }
