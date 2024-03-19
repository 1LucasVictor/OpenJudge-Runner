#include <stdio.h>

int main(){
  int a, b, c, d, x;
  scanf("%d %d %d", &a, &b, &c);
  for( x = a; x <= b; x++)
    { 
     if ( c%x == 0 ) { d += 1;}
      else { d = d;}
    }
  printf("%d\n", d);
  return 0;
}