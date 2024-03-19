#include<stdio.h>

int main(){
  int A,B,K;
  scanf("%d %d",&A,&B);
 
  if((A+B)%2==0){
    printf("%d\n",(A+B)/2);
  }else {
    printf("IMPOSSIBLE\n");
}
  return 0;
}