#include<stdio.h>
int main(){
   int a,b,c,k,sum=0,i;
   scanf("%d%d%d%d",&a,&b,&c,&k);
   for(i=0;i<a;i++){
      if(k>0){
         sum++;
         k--;
      }
   }
    for(i=0;i<b;i++){
      if(k>0){
         k--;
      }
   }
     for(i=0;i<c;i++){
      if(k>0){
         sum--;
         k--;
      }
   }
   printf("%d\n",sum);
   return 0;
}
