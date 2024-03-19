#include<stdio.h>

int main(){
  long N,K,x,y;
  scanf("%d%d",&N,&K);
    x=N%K;
    y=K-x;
    if(x>y){
      printf("%d\n",y);
    }else{
      printf("%d\n",x);
    }
  return 0;
}
