#include <stdio.h>

main() {
  double a, b, c, d, e, f, x, y, v, y1, y2;
  int i;

  while(scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f) != EOF) {
    
    if(a==0) a=1;
    if(b==0) b=1;
    if(d==0) d=1;
    if(e==0) e=1;

    v=a*d;
    y1=v/a;
    y2=v/d;

    a=y1*a;
    b=y1*b;
    c=y1*c;
    d=y2*d;
    e=y2*e;
    f=y2*f;
    if(a<d || a>d) d*(-1);
    e=b-e;
    f=c-f;

    y=f/e;
    if(f==0 && e==0) y=0;
    x=(c+(-1)*b*y)/a;

    if(x == -0) x=0; 
    if(y == -0) y=0;
                                                                      
    printf("%.3f %.3f\n", x,y);
  }

  return 0;
}