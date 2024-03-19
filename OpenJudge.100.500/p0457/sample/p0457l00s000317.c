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

  int n,m;
  ll k;
  ll a[200001],b[200001];

  scanf("%d%d%lld",&n,&m,&k);
  for(int i = 0; i < n; ++i){
    scanf("%lld",a+i);
  }
  for(int i = 0; i < m; ++i){
    scanf("%lld",b+i);
  }

  a[n] = 1111111111111;
  b[m] = 1111111111111;

  int a_count = 0;
  int b_count = 0;
  int book = 0;
  ll sum = 0;
  while(sum <= k){
    if(a_count == n && b_count == m) break;
    if(a[a_count] < b[b_count]){
      if(sum + a[a_count] > k) break;
      sum += a[a_count];
      a_count ++;
      book ++;
    }else{
      if(sum + b[b_count] > k) break;
      sum += b[b_count];
      b_count ++;
      book ++;
    }
  }

  printf("%d",book);


  return 0;
}
