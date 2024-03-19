#include <stdio.h>

int main(void){
  long long N,a[200005],b[200005];

  scanf("%lld",&N);
  for(int i=2;i<=N;i++){
    scanf("%lld",&a[i]);
  }
  for(int k=1;k<=N;k++){
    b[k]=0;
  }
  for(int k=1;k<=N;k++){
    b[a[k]]++;
  }
  for(int k=1;k<=N;k++){
    printf("%lld\n",b[k]);
  }

  return 0;
  }