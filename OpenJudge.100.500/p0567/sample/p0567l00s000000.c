#include<stdio.h>
#include<string.h>
int main(void){
   int A,B,C,a;
   scanf("%d %d %d",&A,&B,&C);
   a=A-B;
   if(a>=C){
      printf("0");
   }else{
      printf("%d",C-a);
   }
   return 0;
}