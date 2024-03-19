#include<stdio.h>
#include<string.h>
int main(){
int a,b,c,k;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&k);
int i,r=0;

for(i=1; i<=k; i++){
    if(i<=a){ r++;}
　　else if(i<=(a+b)){ r+=0;}
    else r--;
     }
 printf("%d",r );   
      
return 0;
}