#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define EPS 1e-10

int main(){
  int n;
  double ab,cd;
  double x1,y1,x2,y2,x3,y3,x4,y4;

  scanf("%d", &n);
  while(n--){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    ab = (x2-x1)/(y2-y1);
    cd = (x4-x3)/(y4-y2);

    if(abs(ab-cd) <= EPS) printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}