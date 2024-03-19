#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define rep(i,a,b) for(int i = a; i <= b;i++)


int main(void){
  int k,a,b;
  scanf("%d",&k);
  scanf("%d%d",&a,&b);

  if(b-a >= k-1){
    printf("OK");
  }
  else{
    printf("NG");
  }
  return 0;
}
