#include<stdio.h>

int main(){
  int k;
  int a,b;
  int i=0;
  scanf("%d",&k);
  scanf("%d %d",&a, &b);
  while(1){
    i+=k;
    if(i>=a && i<=b ){
      printf("OK\n");
      return 0;
    }else if(i>b){
      printf("NG");
      return 0;
    }
  }
}