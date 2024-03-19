#include <stdio.h>

 main(){

   int a,b,c,n;
   scanf("%d%d%d",&a,&b,&c);
   n=c+b;
   
   if(n>a)
     printf("%d",n-a);
     else
       printf("0");
   
}