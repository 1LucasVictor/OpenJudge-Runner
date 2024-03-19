#include<stdio.h>

int main(){
 int x, y, itizi, amari=-1;

 scanf("%d %d", &x, &y);

 if (y >= x){
   itizi = x;
   x   = y;
   y   = itizi;
 } 

   amari = x % y;
 while( (y % amari) != 0){
   x = y;
   y = amari;
   amari = x % y;
 }
 
 printf("%d\n", amari);
 
 return 0;
}