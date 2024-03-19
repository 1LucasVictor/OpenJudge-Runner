#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC174D

//ABC174C

//ABC174B
int main(void) {
  long long n, d, k, i, cou=0, tmp;
  scanf("%lld %lld", &n, &d);
  long long x[n], y[n];
  for(i=0; i<n; i++){
    scanf("%lld %lld", &x[i], &y[i]);
    if(pow(x[i], 2)+pow(y[i], 2)<=d*d) cou++;
  }
  printf("%lld", cou);

}