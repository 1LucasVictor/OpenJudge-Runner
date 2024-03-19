#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int compare_int(const void *a, const void *b)
{
	return *(int *)b - *(int *)a;
}

int main(void)
{
	int i, j, k;
	int ii[1000];
	int min, max;
	int len, flg;
	long long cnt=0, maxcnt;
	long long N,K;
  scanf("%lld %lld", &N,&K);
	if(N<K){
      printf("%lld\n",N);
      return 0;
    }
  	cnt = N%K;
	if(K>=cnt*2){
  printf("%lld\n",cnt);
    }
  	else{
  printf("%lld\n",K-cnt);
    }
      return 0;
}
