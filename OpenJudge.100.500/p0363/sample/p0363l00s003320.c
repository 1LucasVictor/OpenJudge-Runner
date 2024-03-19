#include <stdio.h>
 
int main() {
 
  int a, b, c, d;
 
  scanf("%d %d %d", &a, &b, &c);
 
  if (c < a) {
    d = c;
    c = a;
    a = d;
  }
  if (c < b) {
    d = c;
    c = b;
    b = d;
  }
  if (a > b) {
    d = a;
    a = b;
    b = d;
  }
     
  printf("%d %d %d\n", a, b, c);
         
}
 