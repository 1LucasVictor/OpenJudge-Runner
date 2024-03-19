#include<stdio.h>
#include<string.h>
#define NUM 10
int main(){
   int x,x1,x2,i;
   int cnt=0;
   scanf("%d",&x);
   scanf("%d %d",&x1,&x2);
   for(i=x1;i<=x2;i++){
      if(i%x==0){
         cnt++;
      }
   }
   if(cnt>0){
      printf("OK");
   }else{
      printf("NG");
   }
   
   return 0;
}
