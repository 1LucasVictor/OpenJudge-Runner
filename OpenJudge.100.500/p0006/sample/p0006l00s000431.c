#include<stdio.h>

int main(void){
  int i;
  int remain=100000,n;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    remain*=1.05;
    if(remain%1000>0){
      remain-=remain%1000;
      remain+=1000;
    }
  }
  printf("%d\n",remain);
  return 0;
}