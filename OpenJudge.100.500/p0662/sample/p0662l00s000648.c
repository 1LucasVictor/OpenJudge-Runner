#include <stdio.h>

int main(void){
   int AS,AE,BS,BE;
   scanf("%d%d%d%d",&AS,&AE,&BS,&BE);

   if(BS>AE){printf("0\n"); return 0;}

   printf("%d\n",AE-BS-AS);

   return 0;
}