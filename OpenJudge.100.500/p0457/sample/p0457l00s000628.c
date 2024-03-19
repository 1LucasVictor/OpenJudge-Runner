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
  int k;
  ll a[200001],b[200001];

  scanf("%d%d%lld",&n,&m,&k);
  for(int i = 0; i < n; ++i){
    scanf("%d",a+i);
  }
  for(int i = 0; i < m; ++i){
    scanf("%d",b+i);
  }

  a[n] = 111111111111;
  b[m] = 111111111111;

  int a_count = 0;
  int b_count = 0;
  int book = 0;
  ll sum = 0;
  while(sum <= k){
    if(a_count == n && b_count == m) break;
    if(a[a_count] < b[b_count]){
      sum += a[a_count];
      a_count ++;
      book ++;
    }else{
      sum += b[b_count];
      b_count ++;
      book ++;
    }
  }


  printf("%d",book);


  return 0;
}
