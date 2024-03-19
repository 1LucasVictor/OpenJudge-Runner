#include <stdio.h>

#define MAX 100000

int N, k;
double T[MAX];

int check(double);
int solve(void);


int main(void){
  int i;
  double a;
  scanf("%d%d", &N, &k);
  for( i = 0 ; i < N ; i++) scanf("%lf", &T[i]);
  a = solve();
  printf("%d\n", (int)a);

  return 0;
}



int check(double a){
  int i = 0, j;
  double s;
  for( j = 0 ; j < k ; j++){
    s = 0.0;
    while( s + T[i] <= a){
      s += T[i];
      i++;
      if( i == N ) return N;
    }
  }
  return i;
}

int solve(void){
  double left = 0.0;
  double right = 100000*10000;
  double mid;
  int v;

  while( right - left > 1){
    mid = ( left + right ) / 2;
    v = check(mid);
    if( v >= N ) right = mid;
    else left = mid;
  }
  return right;
}

