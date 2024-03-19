#include<stdio.h>
#include<math.h>

int main() {
  int N, D;
  double X, Y;
  int i;
  int cnt=0;

  scanf("%d %d", &N, &D);
  //printf("%d %d", N, D);
  for(i=0; i< N; i++) {
    scanf("%lf %lf", &X, &Y);
    if (D >= sqrt(X*X + Y*Y)) cnt++;
  }

  printf("%d", cnt);
  return 0;
}