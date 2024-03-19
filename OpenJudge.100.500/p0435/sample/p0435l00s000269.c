#include <stdio.h>
#include <math.h>

int main() {
  int N = 0;

  int count=0;

  double D = 0,x = 0,y = 0;

  scanf("%d %lf",&N,&D);

  for(int i=0;i<N;i++){
    scanf("%lf %lf",&x,&y);
    if(sqrt(x*x+y*y) <= D) count++;
  }

  printf("%d\n",count);

  return 0;
}