#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC172E
//ABC172D
//ABC172C
int main(void) {
  long long n, m, k, i, p=0, q, cou=0, tmp;
  scanf("%lld %lld %lld", &n, &m, &k);
  long long a[n], b[m];
  for(i=0; i<n; i++){
    scanf("%lld", &a[i]);
    if(i!=0) a[i]+=a[i-1];
  }
  for(i=0; i<m; i++){
    scanf("%lld", &b[i]);
    if(i!=0) b[i]+=b[i-1];
  }
  i=0;
  while(a[i]<=k)i++, cou++;

  for(i=n-1; i>=0; i--){
    tmp=0;
    while(a[i]+b[p]<=k&&p<m){
      p++;
      cou=cou>i+p+1 ? cou : i+p+1;
    }
    //printf("%lld, %lld\n", i, p);
  }
  printf("%lld", cou);
}
