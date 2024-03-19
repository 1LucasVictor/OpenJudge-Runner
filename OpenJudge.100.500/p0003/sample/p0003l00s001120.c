#include <stdio.h>

main(){
  double a, b, c, d, e, f, x, y;

  while(1){
    if(scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f)==EOF) break;
    if(a!=0.0){
      y=(f-c*d/a)/(e-b*d/a);
      x=(c-b*y)/a;
    }
    else if(d!=0.0 && b!=0.0){
      y=c/b;
      x=(f-e*y)/d;
    }
    else if(d==0.0){
      x=0.0;
      if(b!=0.0) y=c/b;
      else if(e!=0.0) y=f/e;
    }
    /*  x=(x*10000+5)/10000;
        y=(y*10000+5)/10000; */
    printf("%.3f %.3f\n", x, y);
  }
  return 0;
}