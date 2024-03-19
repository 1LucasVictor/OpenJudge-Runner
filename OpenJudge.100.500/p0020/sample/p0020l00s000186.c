#include <stdio.h>
#include <math.h>
#define EPS .00000001
int main(void){
  int n,i,j;
  double ab,cd;
  double v[4][2];
  scanf("%d",&n);
  for(j=0;j<n;j++){
      for(i=0;i<4;i++) scanf("%lf %lf",&v[i][0],&v[i][1]);
      ab=(v[1][1]-v[0][1])/(v[1][0]-v[0][0]);
      cd=(v[3][1]-v[2][1])/(v[3][0]-v[2][0]);
      if(fabs(ab-cd)<EPS) printf("YES\n");
      else printf("NO\n");
  }
 
  return 0;
}
