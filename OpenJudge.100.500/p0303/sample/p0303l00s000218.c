#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long cal_P(long k, long *num, int *m) {
  long i,j,l,p,max = 0;
  l = 0;
  for(i = 0; i < k; i++) {
    p = 0;
    for(j = 0; j < num[i]; j++) {
      p += m[l];
      l++;
    }
    if(max < p) max = p;
  }
  return max;
}

void check_all(long k, long j, long *num, long n, int *m, long *P) {
  if(n == 0) {
    long a = cal_P(k,num,m);
    if(*P > a) *P = a;
  }else{
    long i;
    for(i = j; i < k; i++) {
      num[i]++;
      check_all(k,i,num,n-1,m,P);
      num[i]--;
    }
  }
}

int main() {
  long n,k,i,t,*num,P;
  int *m;
  scanf("%ld %ld", &n, &k);
  m = (int*)malloc(sizeof(int)*n);
  num = (long*)malloc(sizeof(long)*k);
  memset(num,0,sizeof(long)*k);
  t = 0;
  for(i = 0; i < n; i++) {
    scanf("%d", m+i);
    t += m[i];
  }
  P = t;
  check_all(k,0,num,n,m,&P);
  printf("%ld\n",P);
  
  return 0;
}

	  