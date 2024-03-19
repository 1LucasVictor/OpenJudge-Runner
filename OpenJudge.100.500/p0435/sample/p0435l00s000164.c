#include <stdio.h>
#include <math.h>

int main()
{
  long int N,D;
  long int i,j;
  int kekka = 0;
  scanf("%ld",&N);
  scanf("%ld",&D);

  long int X[200000];
  long int Y[200000];

  for(i=0;i<N;i++){
    scanf("%ld", &X[i]);
    scanf("%ld", &Y[i]);
  }

  for(j=0;j<N;j++){
    long int ans = X[j]*X[j]+ Y[j]*Y[j];
    if(sqrt(ans) <= D){
      kekka += 1;
    }
  }

  printf("%d", kekka);

  return 0;
}
