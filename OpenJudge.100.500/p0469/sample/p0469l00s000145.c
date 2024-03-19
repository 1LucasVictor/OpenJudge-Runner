#include<stdio.h>
int main(void){
  int k,a,b,i;
  scanf("%d%d%d", &k, &a, &b);
  if(a%k==0){
    printf("OK");
  }
  else if(b%k==0){
    printf("OK");
  }
  else if(b/k>a/k){
    printf("OK");
  }
  else{
    printf("NG");
  }
  return 0;
}

