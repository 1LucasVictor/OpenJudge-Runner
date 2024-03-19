#include<stdio.h>
#include<stdlib.h>

int main(){
  int k,a,b;
  scanf("%d%d%d",&k,&a,&b);
  
  for(int i=a;i<=b;i++){
  	if(i%k==0){
      printf("OK");
      return 0;
    }
  }
  
  printf("NG");
  return 0;
}