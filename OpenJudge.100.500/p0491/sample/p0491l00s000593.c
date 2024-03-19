#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long K = 0;

long f(long x) { return labs(x - K); }

int main()
{
  char in[1000];
  fgets(in, 1000, stdin);
  
  long x = atoi(strtok(in," "));
  K = atoi(strtok(NULL, " "));
  
  if(x == 0) { printf("%ld", K); return 0; }
  if(x == K) { printf("0"); return 0; }
  
  long old = x;
  long next = f(x);
  for(; old > next && old != next; next = f(next)) { /*printf("%ld %ld\n", old, next);*/ old = next; }
  
  printf("%ld", old);
  return 0;
}