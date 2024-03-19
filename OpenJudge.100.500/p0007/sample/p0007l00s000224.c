#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
  int i, j, k, l, n;
  int res;

  while(scanf("%d",&n) != EOF){
    res = 0;
    rep(i,10) rep(j,10) rep(k,10) rep(l,10){
      if(i+j+k+l == n) res++;
    }

    printf("%d\n", res);
  }

  return 0;
}