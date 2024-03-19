#include <stdio.h>

int gcd(int a, int b){
  int t, ans;
  if(a<b){
    t = a;
    a = b;
    b = t;
  }
  ans = a%b;
  while(ans!=0){
    a = b;
    b = ans;
    ans = a%b;
      }
  return b;
}

int main(){

  int x, y;

  scanf("%d %d", &x, &y);
  printf("%d\n", gcd(x, y));
  
  return 0;
}

