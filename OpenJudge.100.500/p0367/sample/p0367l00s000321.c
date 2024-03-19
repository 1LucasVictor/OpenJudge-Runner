#include<stdio.h>
 int main(){
 int i,a,b,c;
 int t;

 scanf("%d%d%d",&a,&b,&c);
 t=0;

 for(i=a;i<=b;i++){
 if(c%i==0)t++;
 }

 printf("%d\n",t);
 return 0; 
 }

