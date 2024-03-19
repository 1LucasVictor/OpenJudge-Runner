#include<stdio.h>

int main(){
   int x,y,i,j;
   for(;;){
      scanf("%d %d",&y,&x);
      if(x+y==0) break;
      for(i=0;i<y;i++){
         for(j=0;j<x;j++)
            if(i*j==0 || i+1==y || j+1==x)
               printf("#");
            else
               printf(".");
         printf("\n");
      }
   printf("\n");
   }
   return 0;
}

