#include <stdio.h>

main() {
  int i, n;
  double a, b, c;

  scanf("%d", &n);
  for(i=0 ; i<n ; i++) {
    scanf("%lf%lf%lf", &a,&b,&c);
    if(c*c == a*a + b*b) printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}