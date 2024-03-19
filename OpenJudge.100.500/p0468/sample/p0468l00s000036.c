#include<stdio.h>

int main(void){
   char k[4];
   char abc[4]="ABC";
   char arc[4]="ARC";

   scanf("%s",k);

   if(k[1]==abc[1]){
      printf("ARC");
   }
   if(k[1]==arc[1]){
      printf("ABC");
   }

   return 0;
}
