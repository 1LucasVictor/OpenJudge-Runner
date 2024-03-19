#include<stdio.h>
const int MOD = 1000000007;

int main(void){
  int A,B;
  scanf("%d%d",&A,&B);
  if((A+B)%2 == 0){
    printf("%d\n",(A+B)/2);
  }else{
    printf("IMPOSSIBLE\n");
  }
}
