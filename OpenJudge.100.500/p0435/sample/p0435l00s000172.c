#include <math.h>
#include <stdio.h>

double dist (int x, int y);

double dist (int x, int y){
  return sqrt(x*x+y*y);
}
int main(void){
  int n;
  int a;
  int x, y;
  int sum=0;
  int i;
  scanf("%d", &n); scanf("%d", &a);
  for (i=1;i<=n;i++){
    scanf("%d", &x);
    scanf("%d", &y);
    if (dist(x,y) <= a){
      sum++;
    }
    }
  printf("%d", sum);
  return 0;
}
  
