#include <stdio.h>

int search (int n, int x) {
  int  i, j, k, ans = 0;
  if( x <= n + 2 ) i = x - 3;
  /* else if ( x > n + 2 ) i = x - 2; */
  else  i = n;
  j = x - i - 1;
  if ( j >= n ) j = i - 1 ;
  k = x - i - j;
  while( k < j && j < i ) {
    while(0 < j ) {
      ans++;
      j--;
      k++;
      if( j <= k) break;
    }
    i--;
    j = x - i - 1;
    /* if ( j > n ) j = i - 1 ; */
    if ( j >= i ) j = i - 1;
    k = x - i - j;
    if ( k > n) break;
  }
  return ans;
}

int main (void) {
  int  n, x, ans = 0;
  while ( 1 ){
    scanf("%d %d\n", &n, &x);
    if (n==0 && x == 0) break;
    ans = search(n, x);
    printf("%d\n", ans);
  }
  return 0;
}

