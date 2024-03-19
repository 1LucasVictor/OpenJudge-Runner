#include<stdio.h>
#include<stdlib.h>
#include <string.h>
 
int main(){
 int a,b,c,d,e,k;
 scanf("%d",&a);
 scanf("%d",&b);
 scanf("%d",&c);
 scanf("%d",&d);
 scanf("%d",&e);
 scanf("%d",&k);

if(b-a<=k &&c-a<=k && d-a<=k && e-a<=k &&
  
  c-b<=k && d-b<=k && e-b<=k && d-c<=k &&
  
  e-c<=k && e-d<=k){
  	printf("Yay!");}
  	
else printf(":(");

  
    return 0;}