#include <stdio.h>

int main(){
  int A,B;
  scanf("%d %d",&A,&B);
  int K = (A+B)/2;
  if(abs(A-K) == abs(B-K)){
    printf("%d\n",K);
    return 0;
  }
  printf("IMPOSSIBLE\n");
}
