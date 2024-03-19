#include <stdio.h>

int main () {
  int a,b,c;
  int x,n;
  x = 0;
  n = 0;
  scanf ("%d %d %d",&a,&b,&c);
  for (x=a;x<=b;x++) {
      if ((c/x)*x == c) {
        n ++;
      }
  }
  printf ("%d\n",n);
  return 0;
}