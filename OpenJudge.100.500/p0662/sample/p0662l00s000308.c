#include<stdio.h>
#include<string.h>

int main(){
  
  int A,B,C,D;
  scanf("%d %d %d %d",&A,&B,&C,&D);

  if(B>C){
    if(B<D){
      printf("%d",B-C);
    }else{
      printf("%d",B-D);
    }
  }else{
    printf("0");
  }

  return 0;

}