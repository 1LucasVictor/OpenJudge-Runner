#include <stdio.h>
int main(){
  int a, b, x;
  scanf("%d %d %d", &a, &b, &x);
  if( x >= a && x <= (a+b) ){ printf("YES"); }
  else						{ printf("NO");  }
  return 0;
}