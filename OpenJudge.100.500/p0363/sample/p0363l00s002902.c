#include<stdio.h>

int main(void)
{

 int a , b, c;

 scanf("%d", &a);

 scanf("%d", &b); 

 scanf("%d", &c);

 if(a < b && a < c && b < c){

 printf("%d %d %d\n", a, b, c);

 }

 else if(b < a && b < c && a < c){

 printf("%d %d %d\n", b, a, c);

 }

 else if(c < a && c < b && b < a){

 printf("%d %d %d\n", c, b, a);

 }

 else if(b < c && b < a && c < a){

 printf("%d %d %d\n", b, c, a);

 }

 else if(c < a && c < b && a < b){

 printf("%d %d %d\n", c, a, b);

 }

 else if(a < c && a < b && c < b){

 printf("%d % d %d\n", a, c, b );

 }

 return 0;

}