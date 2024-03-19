#include<stdio.h>
int main(void){
  int x,a,b;
  scanf("%d",&x);
  if(x<500){
    printf("%d",(x/5)*5);
  }
  else{
    a=x/500;
    b=x%500;
    printf("%d", 1000*a+(b/5)*5);
  }
  return 0;
}
    