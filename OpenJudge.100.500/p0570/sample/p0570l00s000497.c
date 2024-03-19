#include <stdio.h>
int main(){
  int K, A, B;
  int X, Y, N;
  scanf("%d %d", &A, &B);
  if(A<B){
    N = B - A;
  }else{
    N = A - B;
  }
  for(K=0; K<=N; K++){
    X = A - K;
    Y = B - K;
    if(X < 0) X = -X;
    if(Y < 0) Y = -Y;
    if(X == Y){
      break;
    }else{
      X=0;
      Y=0;
    }
  }
  if ( X == 0 && Y == 0) printf("IMPOSSIBLE");
  else if(X == Y) printf("%d", K);
  return 0;
}