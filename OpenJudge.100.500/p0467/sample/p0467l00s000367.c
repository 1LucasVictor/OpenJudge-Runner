#include<stdio.h>

int main(){
   int a,b,c,k,i,sum=0,C=0;
   scanf("%d %d %d %d",&a,&b,&c,&k);
   int  sub = k-a;
   if(0<=a&&0<=b&&0<=c){
      if(1<=k&&k<=a+b+c&&a+b+c<=2*pow(10,9)){
         for(i=b;i<sub-b;i++){
            b++;
         }
         for(i=sub-b;i>0;i--){
            C++;
         }
         sum=a+(b*0)+(C*(-1));
         printf("%d",sum);
      }
   }
   return 0;
}