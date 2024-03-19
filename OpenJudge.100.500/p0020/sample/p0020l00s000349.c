#include <stdio.h>

main(){
  double x1, y1, x2, y2, x3, y3, x4, y4;
  int i, n;
  double tan1, tan2;

  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    tan1=(y1-y2)/(x1-x2);
    tan2=(y3-y4)/(x3-x4);
    if(tan1==tan2) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}