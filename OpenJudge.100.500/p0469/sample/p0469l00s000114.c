#include<stdio.h>
int main(void){
  int K, a, b, i;
  scanf("%d\n", &K);
  scanf("%d %d", &a, &b);
  
  for(i=a;i<=b;i++){
    if(i % K == 0){
      printf("OK");
      break;
    }
    if(i==b){
      printf("NG");
  }
  }
  return 0;
}