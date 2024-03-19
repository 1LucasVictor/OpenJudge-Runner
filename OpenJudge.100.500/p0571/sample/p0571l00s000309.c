#include <stdio.h>

int main(){
  int N,A,B;
  scanf("%d%d%d",&N,&A,&B);
  if(B<N*A){
    printf("%d",B);
  }else{
    printf("%d",N*A);
  }
}