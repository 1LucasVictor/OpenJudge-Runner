#include<stdio.h>
int main(){
  int A,B,T,n=0;
  scanf("%d%d%d", &A,&B,&T);
  int t=A;
  
  while(t < T+1){
    n+=B;
    t+=A;
  }
  printf("%d", n);
    
  return 0;
}