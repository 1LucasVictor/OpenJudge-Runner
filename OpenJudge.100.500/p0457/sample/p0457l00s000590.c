#include<stdio.h>

int main(void)
{
  long int n, m, k;
  scanf("%ld %ld %ld", &n, &m, &k);

  long int a[n], b[m];
  for(int i=0;i<n;i++){
    scanf("%ld", &a[i]);
  }
  for(int i=0;i<m;i++){
    scanf("%ld", &b[i]);
  }

  long int x[n+1], y[m+1];
  for(int i=0;i<=n;i++){
    if(i==0) x[0] = 0;
    else x[i] = x[i-1] + a[i-1];
  }
  for(int i=0;i<=m;i++){
    if(i==0) y[0] = 0;
    else y[i] = y[i-1] + b[i-1];
  }

  long int time;
  long int ans=0;
  long int max;
  max = m;
  for(int i=0;i<=n;i++){
    time = x[i];
    for(int j=max;j>=0;j--){
      if(time + y[j]<=k){
	if(ans<i+j) ans = i+j;
	max = j;
	break;
      }
    }
  }

  printf("%ld\n", ans);

  return 0;
}
