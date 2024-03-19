#include<stdio.h>


int main(void)
{
     int a, b, c, d, e, f;
     scanf("%d %d %d", &a, &b, &c);
     if(a > c){
         d = a;
         a = c;
         c = d;
     } if(b > c){
         e = b;
         b = c;
         c = e;
     } if(a > b){
         f = a;
         a = b;
         b = f;
     }
    printf("%d %d %d\n", a, b, c);
     return 0;
 }

         
         