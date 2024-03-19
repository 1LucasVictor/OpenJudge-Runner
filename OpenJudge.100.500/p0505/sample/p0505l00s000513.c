#include<stdio.h>
 int main(){
   int m,n,k,num;
   int sum=0;
   scanf("%d %d",&m,&n);
   for(k=0;k<n;k++){
     scanf("%d",&num);
     sum+=num;
   }
   if(sum>=m){
     printf("Yes\n");
   }else{
     printf("No\n");
   }
   return 0;
 }