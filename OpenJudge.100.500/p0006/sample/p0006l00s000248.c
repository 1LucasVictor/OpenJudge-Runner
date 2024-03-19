#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
  int mny = 100000;
  int i,j,n;
  int kiri[3],tmp,chk;

  scanf("%d",&n);
  rep(i,n){
    mny *= 1.05;
    chk = 0;
    tmp = mny;

    rep(j,3){ kiri[j] = tmp % 10; tmp /= 10;}
    rep(j,3) chk = chk * 10 + kiri[3-1-j];
    if(chk){ mny -= chk; mny += 1000;}
  }

  printf("%d\n", mny);

  return 0;
}