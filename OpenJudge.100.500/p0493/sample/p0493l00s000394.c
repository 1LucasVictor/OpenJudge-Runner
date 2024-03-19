#include<stdio.h>
int main(){
   int x;
   int c1=0;
   int c2=0;
   scanf("%d",&x);
   if(x>=500){
   while(x>=500){
      x=x-500;
      c1++;
   }
   }
   
   if(x<500){
   while(x>=5){
      x=x-5;
      c2++;
   }
   }
   
   int a=c1*1000+c2*5;
   printf("%d",a);
   return 0;
}
