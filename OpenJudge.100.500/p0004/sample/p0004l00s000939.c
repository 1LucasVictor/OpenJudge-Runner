#include <stdio.h>
int main( void ) {
 long a,b,r,t,x,y;
 while(
 scanf("%ld %ld",&a,&b ) != EOF ) {
 x = a; y = b; if( a < b ){
 t = b; b = a; a = t; }
 r = a % b; while(r != 0){
 a = b; b = r; r = a % b; }

 printf("%ld %ld\n",b, x/b*y); }

 return 0;
} 
