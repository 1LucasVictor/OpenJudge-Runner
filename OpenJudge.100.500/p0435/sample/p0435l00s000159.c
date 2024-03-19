#include<stdio.h>

int main(void)
{
  long int N, D;
  scanf("%ld %ld", &N, &D);

  long int X[N], Y[N];
  for(int i=0;i<N;i++){
    scanf("%ld %ld", &X[i], &Y[i]);
  }

  int count = 0;
  for(int i=0;i<N;i++){
    if(D*D >= X[i]*X[i]+Y[i]*Y[i]) count++;
  }

  printf("%d\n", count);

  return 0;
}
