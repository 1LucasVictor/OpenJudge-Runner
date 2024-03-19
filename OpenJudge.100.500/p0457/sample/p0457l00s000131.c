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

  int n,m,k;
  int a[200001],b[200001];
  int maxim = 0;

void dfs(int cur, int a_count, int b_count){

  if(cur > k || a_count > n || b_count > m) return;

  maxim = max(maxim,a_count + b_count);

  dfs(cur + a[a_count], a_count+1, b_count);
  dfs(cur + b[b_count], a_count, b_count+1);
}

int main(){

  scanf("%d%d%d",&n,&m,&k);
  for(int i = 0; i < n; ++i){
    scanf("%d",a+i);
  }
  for(int i = 0; i < m; ++i){
    scanf("%d",b+i);
  }

  dfs(0,0,0);

  printf("%d",maxim);


  return 0;
}
