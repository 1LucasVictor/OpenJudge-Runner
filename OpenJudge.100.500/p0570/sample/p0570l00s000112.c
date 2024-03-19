#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int A,B,K,k;
  scanf("%d %d",&A,&B);
  k=abs(A+B);
  if(k%2==1){
    printf("IMPOSSIBLE\n" );
  }else{
    K=(k/2);
    printf("%d\n",K );
  }
  return 0;
}
