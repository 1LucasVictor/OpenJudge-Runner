#include <stdio.h>

int main(void){
  int a, b, t, sum;
  double time;

  scanf("%d %d %d", &a, &b, &t);
  sum=0;
  for(time=a;time<=t+0.5;time+=a){
    sum+=b;
  }
  printf("%d\n", sum);
  return 0;
}