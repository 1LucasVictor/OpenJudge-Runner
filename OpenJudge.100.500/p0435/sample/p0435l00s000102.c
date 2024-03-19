#include <stdio.h>

int main(){
  int n, d, i;
  int a = 0;
  scanf("%d %d", &n, &d);
  for(i = 0; i < n; i++){
    int x, y;
    scanf("%d %d", &x, &y);
    unsigned long long int xx = x * x;
    unsigned long long int yy = y * y;
    unsigned long long int dd = d * d;
    if(xx + yy <= dd) a += 1;
  }
  printf("%d\n", a);
  return 0;
}
