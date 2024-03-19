#include <stdio.h>
#define MAX 100000
int n, k;
double T[MAX];
int check(double p){
  int i = 0, j = 0;
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

  double l = 0.0;

  double r = 100000*10000;
  double m;
  int v;

  while( r - l > 1){
    m = ( l + r ) / 2;
    v = check(m);
    if( v >= n ) r = m;
    else l = m;
  }
  return r;
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

