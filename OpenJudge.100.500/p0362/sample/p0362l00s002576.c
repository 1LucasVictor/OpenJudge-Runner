#include<stdio.h>

int main(){
 int a, b, c, hantei;
 hantei = 1;
 
 scanf("%d %d %d", &a, &b, &c);
 
 if ( (a >= b) || (b >= c) || (a >= c) ) {
   hantei = 0;
 }

 if (hantei == 1) {
   printf("Yes\n");
 } else {
   printf("No\n");
 }

 return 0;
}