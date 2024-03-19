#include <stdio.h>
int main () {
  int a,b,c,d,s,e,t;
  scanf ("%d%d%d%d",&a,&b,&c,&d);
  if (a < c) {
    s = c;
  } else {
    s = a;
  }
  if (b < d) {
    e = b;
  } else {
    e = d;
  }
  t = e - s;
  if (t >= 0) {
    printf ("%d\n", t);
  } else {
    printf ("0\n");
  }
  return 0;
}