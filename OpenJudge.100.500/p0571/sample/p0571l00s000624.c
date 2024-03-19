#include <stdio.h>
int main(int argc, char const *argv[]) {
  int N,A,B;
  int sum1, sum2;
  scanf("%d %d %d\n",&N, &A, &B );

  sum1 =  N*A;
  sum2 = B;

  if(sum1 >= sum2){
    printf("%d\n",sum2 );
  } else{
    printf("%d\n",sum1 );
  }


  return 0;
}
