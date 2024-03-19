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
    scanf("%d",a+i);
  }
  for(int i = 0; i < m; ++i){
    scanf("%d",b+i);
  }
  a[n] = 111111111111111;
  b[n] = 111111111111111;

  int a_count = 0;
  int b_count = 0;
  int count = 0;
  ll sum = 0;
  int flag = 0;
  while(sum <= k){
    if(a[a_count] < b[b_count]){
      sum += a[a_count];
      a_count ++;
      count ++;
    }else{
      sum += b[b_count];
      b_count ++;
      count ++;
    }
  }
  if(a_count != n || b_count != m || sum > k)count --;

  printf("%d",count);


  return 0;
}
