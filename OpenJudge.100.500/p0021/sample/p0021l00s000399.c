#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

int main(){
  int n;
  int i,j,tmp,res,in;
  int a[5010];

  while(scanf("%d",&n) && n != 0){
    res = -1000000;
    rep(i,n) scanf("%d", &a[i]);
    rep(i,n){
      tmp = 0;
      REP(j,i,n){
        tmp += a[j];
        if(res < tmp) res = tmp;
      }
    }

    printf("%d\n",res);
  }

  return 0;
}