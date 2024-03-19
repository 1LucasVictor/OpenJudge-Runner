#include <stdio.h>

int main (void){
  int X, A, B;
  scanf ("%d %d %d", &X, &A, &B);
  if (A-B>=0){
    printf("delicious");
  }else if (0<B-A<=X){
    printf("safe");
  } else {
    printf ("dangerous");
  }
  return 0;
}
