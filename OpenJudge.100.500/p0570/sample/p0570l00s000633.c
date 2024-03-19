#include <stdio.h>

int main(){
  int a,b;
  if(scanf("%d",&a)==1 && scanf("%d",&b)==1){}
  
  int c;
  if(a>b){
    c=a;
    a=b;
    b=c;
  }
  
  if((a+b)%2 == 0){
    printf("%d",a+(b-a)/2);
  }else{
    printf("IMPOSSIBLE");
  }
  
  return 0;
}