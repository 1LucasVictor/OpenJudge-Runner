#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define rep(i,a,b) for(int i = a; i <= b;i++)


int main(void){
  int k,a,b;
  scanf("%d",&k);
  scanf("%d%d",&a,&b);
  int count = 0;

  rep(i,a,b){
    if(i%k == 0){
      printf("OK");
      count ++;
      break;
    }
  }
  if(count == 0){
    printf("NG");
  }

  return 0;
}
