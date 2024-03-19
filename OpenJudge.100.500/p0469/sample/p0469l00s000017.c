#include<stdio.h>

void main(){
  int a, b, k;
  scanf("%d %d %d",&k,&a,&b);
  
  for(int i=a; i<b+1; i++){
    if(i%k==0){
      printf("OK");
      return;
    }
  }
  printf("NG");
}