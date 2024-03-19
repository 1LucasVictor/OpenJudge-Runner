#include <stdio.h>

#define MAX 100000

int n, k;
double T[MAX];

int check(double p){
  int i = 0, j;
  double s;
  for( j = 0 ; j < k ; j++){
    s = 0.0;
    while( s + T[i] <= p){
      s += T[i];
      i++;
      if( i == n ) return n;
    }
  }
  return i;
}

int solve(){
  double left = 0.0;
  double right = 100000*10000;
  double mid;
  int v;

  while( right - left > 1){
    mid = ( left + right ) / 2;
    v = check(mid);
    if( v >= n ) right = mid;
    else left = mid;
  }
  return right;
}

int main(){
  int i;
  double ans;
  scanf("%d%d", &n, &k);
  for( i = 0 ; i < n ; i++) scanf("%lf", &T[i]);
  ans = solve();
  printf("%d\n", (int)ans);

  return 0;
}


