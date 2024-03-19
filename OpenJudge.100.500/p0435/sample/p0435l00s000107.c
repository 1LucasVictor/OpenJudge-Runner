#include <stdio.h>
#include <math.h>

int main(){
  int n, d, i;
  int a = 0;
  scanf("%d %d", &n, &d);
  for(i = 0; i < n; i++){
    int x, y;
    scanf("%d %d", &x, &y);
    long long int b = x * x + y * y;
    if(sqrt(b) <= d) a += 1;
  }
  printf("%d\n", a);
  return 0;
}