#include<stdio.h>
int main(){
   int n,ans,y;
   scanf("%d",&n);
   ans=n;
   y=ans%10;
   if(y==2||y==4||y==5||y==7||y==9){
      printf("hon");
   }else if(y==0||y==1||y==6||y==8){
      printf("pon");
   }else{
      printf("bon");
      
   }
   return 0;
}
   
