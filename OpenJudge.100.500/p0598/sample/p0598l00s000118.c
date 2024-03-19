#include <stdio.h>
int main(void){
  
  int A,B;
  int sum,sa;
  1<=A<=B<=20;
  
  scanf("%d %d",&A,&B);
  if(B%A==0){
    sum=A+B;
  printf("%d",sum);
  }
    else if(B%A>=1){
      sa=B-A;
      printf("%d",sa);
    }
  return 0;
}