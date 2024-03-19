#include<stdio.h>

int main(void){
   int X,i;
   int y,z;
   int count=0;
   
   scanf("%d",&X);
   y=(X/500)*1000;
      z=((X%500)/5)*5;
      
      count=y+z;
      printf("%d\n",count);
      return 0;
      }
