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
  long long a[n+1], b[m+1];
  a[0]=0, b[0]=0;
  for(i=1; i<n+1; i++){
    scanf("%lld", &a[i]);
    if(i!=1) a[i]+=a[i-1];
  }
  for(i=1; i<m+1; i++){
    scanf("%lld", &b[i]);
    if(i!=1) b[i]+=b[i-1];
  }
  i=0;
  while(a[i]<=k && i<=n)
    i++, cou=i-1;
  //printf("%lld, %lld, %lld\n", i, p, cou);


  for(i=n; i>=0; i--){
    while(a[i]+b[p]<=k&&p<=m){
      cou=cou>=i+p ? cou : i+p;
      p++;
    }
    //printf("%lld, %lld, %lld\n", i, p, cou);
  }
  printf("%lld", cou);
}
