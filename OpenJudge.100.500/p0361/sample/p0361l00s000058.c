#include <stdio.h>
int main(void){

   int S;
   scanf("%d",&S);
   printf("%d",S/3600);
   printf(":");
   printf("%d",(S%3600)/60);
   printf(":");
   printf("%d\n",(S%3600)%60);
   return 0;
}

