#include<stdio.h>

int main(){

   int a,b,c,A;

   scanf("%d %d %d",&a,&b,&c);

   if( a > b ){
       A = b;
       b = a;
       a = A;
}

   if( b > c ){
       A = c;
       c = b;
       b = A;
}


   if( a > b ){
       A = b;
       b = a;
       a = A;
}


   printf("%d %d %d\n",a,b,c);

return 0;
}


