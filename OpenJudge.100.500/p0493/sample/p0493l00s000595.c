#include<stdio.h>

int main(void){
  long long x,c=0;
  scanf("%lld",&x);
  while(x>=500){
    c+=1000;
    x-=500;
  }
  while(x>=5){
    c+=5;
    x-=5;
  }
  printf("%lld",c);
  return 0;
}
