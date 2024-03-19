#include<stdio.h>

int main(){
  int a,i,j;
  i=0;
  j=0;
  scanf("%d",&a);
  
  
    j=a/500;
    i=(a-500*j)/5;
  
 
  a=1000*j+5*i;
  printf("%d",a);
}