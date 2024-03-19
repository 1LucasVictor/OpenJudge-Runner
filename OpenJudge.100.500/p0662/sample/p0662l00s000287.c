#include<stdio.h>

int main(){
  
  int A,B,C,D;
  scanf("%d %d %d %d",&A,&B,&C,&D);

  int max,min;
  if(A>C){
    max = A;
  }else{
    max = C;
  }

  if(B>D){
    min = D;
  }else{
    min = B;
  }
  
  if(max < min){
    printf("%d",min-max);
  }else{
    printf("0");
  }

  return 0;

}