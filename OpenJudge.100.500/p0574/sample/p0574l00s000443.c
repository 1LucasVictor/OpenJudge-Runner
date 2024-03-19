#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

char S[4];

int main()
{
  int cnt;
  int i;

  cnt = scanf("%s", &S);

  for(i=1; i<4; i++) {
    if (S[i] == S[i - 1]) {
      printf("Bad");
      return 0;
    }
  }
  
  printf("Good");
  
  return 0;
}

