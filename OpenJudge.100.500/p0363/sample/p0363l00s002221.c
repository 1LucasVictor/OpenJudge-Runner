#include<stdio.h>
  
int main(void)
{
   int a, b, c, key;
   scanf("%d %d %d", &a, &b, &c);
   if(a > b){
        key = a;
        a = b;
        b = key;
   }
   if(b > c){
        key = b;
        b = c;
        c = key;
        if(a > b){
            key = a;
            a = b;
            b = key;
        }
   }
   printf("%d %d %d\n", a, b, c);
   return 0;
}