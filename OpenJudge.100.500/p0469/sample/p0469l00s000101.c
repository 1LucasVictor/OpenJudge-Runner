#include <stdio.h>

int main(void){
  int k,a,b;
  int i;
  int flag = 0;
  
  scanf("%d %d %d",&k, &a, &b);
  
  for(i = a; i <= b; i++){
    if(i % k == 0)flag = 1;
  }
  
  if(flag == 1){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  
  return 0;
}