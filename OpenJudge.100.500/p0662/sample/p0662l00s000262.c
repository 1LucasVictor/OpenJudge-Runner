#include <stdio.h>

int main(void){
   int AS,AE,BS,BE,time;
   scanf("%d%d%d%d",&AS,&AE,&BS,&BE);

   if(BS>AE){printf("0\n"); return 0;}

   time=AE-BS;
   if((AS>0)&&(BS<AS)) time-=AS;
   if(AE>BE) time-=AE-BE;


   printf("%d\n",time);
   return 0;
}