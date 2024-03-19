#include<stdio.h>
int main(){
  int N,A,B;
  scanf("%d",&N);
  scanf("%d",&A);
  scanf("%d",&B);
  
  
  if((N*A)<B){
    printf("%d",N*A);
  }
  else{
    printf("%d",B);
  }
  
  return 0;
}