#include <stdio.h>

 int main(void)
 {
 int n=0,i=0,count=0;
 int a,b=0;
 
 scanf("%d %d %d",&a,&b,&n);

 

 for(i=1;i<=n;i++){
 if(n%i==0){
 if(a<=i && b>=i){
 count++;
 }
 }
 }
 
 printf("%d\n",count);
 

 return 0;
 }