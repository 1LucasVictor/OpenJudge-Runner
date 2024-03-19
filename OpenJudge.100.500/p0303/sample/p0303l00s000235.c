#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long check_P(int *m, long n, long P,long k0) {
  long k,i,t;
  t = 0;k = 1;
  for(i = 0; i < n; i++) {
    if(t+m[i] > P) {
      k++;
      t = 0;
      if(k > k0) return 1;
    }
    t+= m[i];
  }
  return 0;
}

int main() {
  long n,k,i,max,P,d;
  int *m;
  scanf("%ld %ld", &n, &k);
  m = (int*)malloc(sizeof(int)*n);
  max = 0;			   
  for(i = 0; i < n; i++) {
    scanf("%d", m+i);
    if(max < m[i]) max = m[i];
  }
  
  P = max;
  d = max;
  if(n > max) d = n;
  while(check_P(m,n,P,k) != 0) P+=d;
  while(P >= max && check_P(m,n,P,k) == 0) P--;
  P++;
  printf("%ld\n",P);
  
  return 0;
}