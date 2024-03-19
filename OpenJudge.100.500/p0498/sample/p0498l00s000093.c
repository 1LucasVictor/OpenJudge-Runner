#include <stdio.h>

int main(void){
  int N,a;
  scanf("%d",&N);
  
  if(N%2==1){
    a = N/2+1;
  }
  else{
    a = N/2;
  }
  printf("%d\n",a);
  return 0;
}