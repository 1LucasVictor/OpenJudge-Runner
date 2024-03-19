#include <stdio.h>

static long N[100000];

int check(long P, long n, long K){
  long k = 1;
  long i;
  long sum=0;
  for(i=0; i<n; i++){
    sum += N[i];
    if (sum > P){
      sum = N[i];
      k++;
      if (k > K)
	return (k+1);
    }
  }
  return k;
}

int main(void) {
  long n,k,i;
  long x=0;
  long Ps,Pe;
  scanf("%ld %ld\n",&n, &k);
  for(i=0;i<n;i++){
    long w;
    scanf("%ld\n",&w);
    N[i]=w;
    if (w>x) x=w;
  }

  Pe=x; Ps=x;
  while(check(Pe, i, k)>k) {
    Ps=Pe;
    Pe=Ps*8;
  }  

  {
    while (1) {
      long M=(Ps+Pe)/2;
      long c=check(M, i, k);
      if (c>k) Ps = M;
      else if (c<=k) {
	Pe = M;
	if(Ps==Pe)
	  break;
	else if ((c==k)&&((M-Ps)<10)){
	  while(check(Ps, i, k)==k)
	    Ps++;
	  Ps++;
	  break;
	}
      }
    }
    printf("%ld\n",Ps);
  }

  return 0;
}