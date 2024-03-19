//2:21 start

#include<stdio.h>

int main(){
  int a,b;
  scanf("%d", &a);
  scanf("%d", &b);

  int A[3];
  A[0] = a+b;
  A[1] = a-b;
  A[2] = a*b;
  
  int max = A[0];
  for(int i=0; i<3; i++){
    if(max<A[i])max = A[i];
  }

  printf("%d\n", max);

  return 0;
}
