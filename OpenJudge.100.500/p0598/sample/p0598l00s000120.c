#include "stdio.h"

int main(){
  
  int a,b;
  
  scanf("%d %d",&a,&b);
  
  if(b%a!=0){
    a*=-1;
  }
  
  printf("%d",a+b);
  
  return 0;
  
}