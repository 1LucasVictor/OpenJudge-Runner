#include <stdio.h>

int check(long P, long *N, long n, long K){
  long k = 1;
  long i;
  long sum=0;
  for(i=0; i<n; i++){
    sum+=N[i];
    if (sum>P){
      sum = N[i];
      k++;
      if (k>K)
	return (k+1);
    }
  }
  return k;
}

int main(void) {
  long n,k,i;
  long x=0;
  long N[100000],P;
  scanf("%ld %ld\n",&n, &k);
  for(i=0;i<n;i++){
    long w;
    scanf("%ld\n",&w);
    N[i]=w;
    if (w>x) x=w;
  }

  P=x;
  while(1){
    if(check(P, N, i, k)<=k){
      printf("%ld\n",P);
      break;
    }
    else
      P++;
  }
  return 0;
}