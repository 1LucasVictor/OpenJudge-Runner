#include <stdio.h>
void gcd(int x, int y){
  if(x % y){
    gcd(y, x % y);
  }else{
    printf("%d ", y);
  }
}
void lcm(int x, int y, int a){
  int g = y * a;
  if(g % x){
    lcm(x, y, a + 1);
  }else{
    printf("%d\n", g);
  }
}
int main(void){
  int x, y;

  while(scanf("%d%d", &x, &y) != EOF){
    int a, b;
    if(x > y){
      a = x;
      b = y;
    }else{
      a = y;
      b = x;
    }
    gcd(a, b);
    lcm(a, b, 1);
  }
}