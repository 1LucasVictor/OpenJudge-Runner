#include <stdio.h>
#include <math.h>

main (){
  int N, D;
  int sum = 0, i;
  double d;
  int X[200001], Y[200001];
  scanf("%d%d", &N, &D);
  for(i = 0; i < N; i++){
    scanf("%d%d", &X[i], &Y[i]);
  }
  
  for(i = 0; i < N; i++){
    d = sqrt(pow(X[i],2) + pow(Y[i],2));
    if(d <= D){ sum++; }
  }
  
  printf("%d", sum);
  
}