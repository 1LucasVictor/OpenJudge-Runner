#include <stdio.h>
int main(){
  long x,count=0;
  
  scanf("%ld",&x);
  
  count+=(x/500)*1000;
  x=x%500;
  count+=(x/5)*5;
  
  printf("%ld",count);
}