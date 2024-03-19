#include<stdio.h>

int main(){
  int N,K,x,y;
  scanf("%d %d\n",&N,&K);
  for(x=N%K;x>K;N=x){
    x=N%K;
  }
  if(x==K){
    printf("0\n");
  }else{
    y=K-x;
    if(x>y){
      printf("%d\n",y);
    }else{
      printf("%d\n",x);
    }
  }
  return 0;
}
