#include <stdio.h>

int main(){
  int n,a,b;
  
  if(scanf("%d",&n)==1 && scanf("%d",&a)==1 && scanf("%d",&b)==1){}
  
  if(n*a > b){
    printf("%d",b);
  }else{
    printf("%d",n*a);
  }
  
  return 0;
}