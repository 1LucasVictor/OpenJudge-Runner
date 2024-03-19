#include <stdio.h>

int main(void){
  int n,a,b,c;
  
  scanf("%d", &n);
  
  a=n/100;
  b=(n-100*a)/10;
  c=(n-100*a-10*b);
  
  if(a==7 || b==7 || c==7){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  
  return 0;
}