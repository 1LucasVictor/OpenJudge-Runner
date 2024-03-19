#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//abc163C
int main(void) {
  int m, n, k, i, a, cou=0, tmp;
  scanf(" %d", &n);
  int s[n];
  for(i=0; i <n; i++)s[i]=0;
  for(i=0; i <n-1; i++){
    scanf(" %d", &a);
    s[a-1]++;
  }
  for(i=0; i <n; i++) printf("%d\n", s[i]);
  return 0;
}