#include <stdio.h>
typedef long long l;

int n, k;
l a[100000];

int check(l P){
  int i=0, j;
  for(j = 0; j < k; j++){
    l s = 0;
    while(s+a[i] <= P){
      s += a[i];
      i++;
      if(i == n)return n;
    }
  }
  return i;
}

int solve(){
  l left=0;
  l right = 100000*10000;
  l mid;
  int v;

  while(right - left > 1){
    mid = (right+left)/2;
    v = check(mid);
    if(v >= n)right = mid;
    else left = mid;
  }
  return right;
}

int main(void){
  int i;
  l ans;
  scanf("%d", &n);
  scanf("%d", &k);

  for(i = 0; i < n; i++){scanf("%d", &a[i]);}

  ans = solve();
  printf("%d\n", ans);

  return 0;
}

