#include<stdio.h>

int main(void){
   int i;
   char st, a[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

   do{
   scanf("%c", &st);

   for(i=0;i<52;i++){
   if(a[i] == st){
      st = a[ (i+26)%52];
      break;
   }
   }
   printf("%c", st);
   }while(st !='\n');

   return 0;
}
