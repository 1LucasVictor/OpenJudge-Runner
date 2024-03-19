#include<stdio.h>

int main(){
   int n,half;
   scanf("%d",&n);
   half=n/2;
   if(n%2==0){
   }else{
      half+=1;
   }
   printf("%d",half);
   return 0;
}
