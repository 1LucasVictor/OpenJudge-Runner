#include <stdio.h>

int main(void){
   int a,b,c,k,i,t=0;

   scanf("%d%d%d%d",&a,&b,&c,&k);

   if(k>0){
      t+=a;
      k-=a;
      if(k<0) {t+=k; k=0;}
   }
   if(k-b>0){
      k-=b;
      t-=c;
      k-=c;
      if(k<0) {t-=k;}
   }

   printf("%d\n",t);
   return 0;
}