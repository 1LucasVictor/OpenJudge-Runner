#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
  int n,a,b;
  scanf("%d",&n);
  

    a=n/500;
    
  
  n=n%500;
  b=n/5;
  printf("%d",1000*a+5*b);
return 0;
}