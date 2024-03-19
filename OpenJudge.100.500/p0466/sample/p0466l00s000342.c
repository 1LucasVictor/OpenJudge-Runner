#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long long int ull;
typedef long long int ll;
typedef long double ld;

int main(void) {
  int scan; // scanf result
  char *s; // to input 
  char *t; // to input 

  s = (char *)malloc(sizeof(char) * 10);
  t = (char *)malloc(sizeof(char) * 11);
  scan = scanf("%s", s);
  scan = scanf("%s", t);

  int lens = strlen(s);
  int lent = strlen(t);
  if (strncmp(s, t, lens) == 0) {
    if (lent - lens == 1) {
      printf("Yes");
      return (0);
    } else {
      printf("No");
      return (0);
    }
  }
  printf("No");
  return (0);

}
