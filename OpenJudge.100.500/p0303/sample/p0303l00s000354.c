#include<stdio.h>
#define MAX 100000

typedef long long llong;

int n, k;
llong T[MAX];

int check(llong P){
  int i=0, j;
  for( j = 0 ; j < k ; j++ ){
    llong s = 0;
    while( s + T[i] <= P ){
      s += T[i];
      i++;
      if( i == n ) return n;
    }
  }
  return i;
}

int solve(){
  llong l = 0;
  llong r = 100000 * 10000;
  llong mid;
  while( r - l > 1 ){
    mid = ( l + r ) / 2;
    int v = check(mid);
    if( v >= n ) r = mid;
    else l = mid;
  }
  return r;
}

int main(){
  int i;
  scanf("%d%d",&n, &k);
  for( i = 0 ; i < n ; i++ ){
    scanf("%d", &T[i]);
  }
  llong ans = solve();
  printf("%d\n",ans);
  return 0;
}

