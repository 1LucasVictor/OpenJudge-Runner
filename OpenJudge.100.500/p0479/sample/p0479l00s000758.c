#include<stdio.h>

int main(void){
   int a,b,i;
   scanf("%d",&a);
   int c[a+1];
   for(i=0;i<a+1;i++){
       c[i]=0;
   }
   for(i=1;i<a;i++){
       scanf("%d",&b);
       c[b]+=1;
   }
   for(i=1;i<=a;i++){
       printf("%d\n",c[i]);
   }
}