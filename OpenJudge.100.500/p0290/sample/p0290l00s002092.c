#include<stdio.h>
 int main(){
   int i,j,n[10000],s,a=0,c=0;
   scanf("%d",&s);
   for(i=0;i<s;i++){
     scanf("%d",&n[i]);
     a=0;
     for(j=1;j<n[i]+1;j++){
       if(n[i]%j==0)a++;
     }
     if(a==2)c++;
   }
   printf("%d\n",c);
     return 0;
 }