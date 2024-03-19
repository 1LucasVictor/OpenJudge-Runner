#include<stdio.h>
int main(){
  int N,A,B;
  scanf("%d %d %d",&N,&A,&B);
  int X = N*A;
  if(X<B){
    printf("%d",X);
  }else{
    printf("%d",B);
  }
  return 0;
}