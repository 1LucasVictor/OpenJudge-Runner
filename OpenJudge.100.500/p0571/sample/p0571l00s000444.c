#include<stdio.h>
int main(){
  int N,A,B;
  scanf("%d %d %d",&N,&A,&B);
  int Train=N*A;
  if(Train < B){
    printf("%d",Train);
  }else{
    printf("%d",B);
  }
  return 0;
}