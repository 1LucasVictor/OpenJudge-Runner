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

long middle(long a, long b) {
  if(b-a == 2) return a+1;
  return (b-a-1)/2+a;
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

  d = max;
  if(n/k > max) d = n/k;
  P = d;
  while(check_P(m,n,P,k) != 0) P+=d;
  
  if(P == d){
    printf("%ld\n", P);
  }else{
    long a = P-d,b = P;
    while(b-a > 1) {
      if(check_P(m,n,middle(a,b),k) == 0) {
	b = middle(a,b);
      }else{
	a = middle(a,b);
      }
    }
    printf("%ld\n",b);
  }
  
  return 0;
}