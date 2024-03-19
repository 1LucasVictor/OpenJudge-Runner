#include <stdio.h>
#define mod 2019

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int main(void){
  int L, R;
  scanf("%d%d", &L, &R);
  
  if(R-L >= mod){
    printf("0\n");
    return 0;
  }
  L %= mod;
  R %= mod;
  int maximam = max(L, R);
  int minimam = min(L, R);
  int ans = 1e9;
  for (int i = minimam; i < maximam; i++) {
    for (int j = i+1; j <= maximam; j++) {
      ans = min((i*j)%mod, ans);
    }
  }
  printf("%d\n", ans);

  return 0;
}