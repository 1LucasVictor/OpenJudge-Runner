#include <stdio.h>
#define MAX 44
 int function(int n){
   int i,F[MAX];
   if(n==0||n==1)return 1;
   F[0]=1;
   F[1]=1;
   for(i=2;i<=n;i++)F[i]=F[i-2]+F[i-1];
return F[n];
 }
 int main(){

   int x,n;

   scanf("%d",&n);
   x=function(n);
   printf("%d\n",x);
   return 0;
 }

