#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef long long ll;

int max(int a, int b){
  if(a > b) return a;
  else return b;
}
int min(int a, int b){
  if(a < b) return a;
  else return b;
}

int sort(const void *a ,const void *b){
  return *(int*)a - *(int*)b;
}

int main(){

  int n,m,k;
  ll a[200001],b[200001];

  a[0] = 0;
  b[0] = 0;
  scanf("%d%d%d",&n,&m,&k);
  for(int i = 1; i <= n; ++i){
    scanf("%lld",&a[i]);
    a[i] += a[i-1];
  }
  for(int i = 1; i <= m; ++i){
    scanf("%lld",&b[i]);
    b[i] += b[i-1];
  }

  int j = m;
  int ans = 0;
  for(int i = 0; i < n+1; ++i){
    if(a[i] > k) break;
    while(b[j] > k-a[i]) --j;
    ans = max(ans, i+j);
  }

  printf("%d",ans);

  return 0;
}
