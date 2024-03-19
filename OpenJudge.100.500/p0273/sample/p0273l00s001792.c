#include<stdio.h>
 
int f[50];
 

 
  int main(){
    int i,n;
 
   scanf("%d",&n);
  
   for(i=0;i<n;i++){
     f[i]=0;
   }
  
   printf("%d\n",fbonachi(n));
  
   return 0;
 }   

 int  fbonachi(int n){
   if(n == 0 || n == 1){
     f[n] = 1;
     return f[n];
   }
   if(f[n] != 0)return f[n];
   f[n] = fbonachi(n-1) + fbonachi(n-2);
   return f[n];
 }