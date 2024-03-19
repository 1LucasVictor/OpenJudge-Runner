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
  char *n; // to input 

  n = (char *)malloc(sizeof(char) *4);
  scan = scanf("%s", n);
  if (n[0] != '7') {
    if (n[1] != '7') {
      if (n[2] != '7') {
        printf("No");
        return (0);
      }
      printf("Yes");
      return (0);
    }
    printf("Yes");
    return (0);
  }
  printf("Yes");
  return (0);
}
