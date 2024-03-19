#include <stdio.h>

int main(void){
  int a,b,k,i;
  
  scanf("%d", &k);
  scanf("%d %d", &a, &b);
  
  for(i=a;i<=b;i++){
    if(i%k==0){
      printf("OK"); goto flag;
    }
  }
  
  printf("NG");
  flag:;
  
  return 0;
}