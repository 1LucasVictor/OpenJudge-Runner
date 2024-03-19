#include<stdio.h>
#define MAX 100000

typedef long long llong;
int n, k;
llong w[MAX];

int check(llong P){
  int v = 0;
  for (int j = 0; j < k; j++) {
    llong s = 0;
    while(s + w[v] <= P){
      s += w[v];
      v++;
      if (v == n) {
        return n;
      }
    }
  }
  return v;
}

int solve(){
  llong left = 0;
  llong right = 100000 * 10000;
  llong mid;
  while (right - left > 1) {
    mid = (left +  right) / 2;
    int v = check(mid);
    if (v >= n) {
      right = mid;
    }else {
      left = mid;
    }
  }
  return right;
}

int main(int argc, char const *argv[]) {
  scanf("%d%d", &n, &k);
  for(int i = 0; i < n; i++){
    scanf("%lld", &w[i]);
  }
  llong result = solve();
  printf("%lld\n", result);
  return 0;
}

