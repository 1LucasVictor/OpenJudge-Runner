#include <stdio.h>
#include <math.h>

int main(void)
{
  int i = 0;
  int count = 0;
  double x, y;
  double a[1000], b[1000], c[1000], d[1000], e[1000], f[1000];

  while((scanf("%lf%lf%lf%lf%lf%lf",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i])) != EOF){
    if((-1000 <= (a[i], b[i], c[i], d[i], e[i], f[i])) && ((a[i], b[i], c[i], d[i], e[i], f[i]) <= 1000)){
    i++;
    count++;
    }
  }

  for(i = 0; i < count; i++){
    int n;
    double ansx,ansy,unit;
    if(a[i] == b[i] == c[i] == d[i] == e[i] == f[i]){
      x = 2;
      y = -1;
    }else{
    x = ((c[i]*e[i])-(b[i]*f[i]))/((a[i]*e[i])-(b[i]*d[i]));
    y = ((a[i]*f[i])-(c[i]*d[i]))/((a[i]*e[i])-(b[i]*d[i]));
    }

    if(x == -0)
      x *= -1;

    n = 4;
    unit = pow(10, n-1);
    ansx = (round(x*unit))/unit;
    ansy = (round(y*unit))/unit;
    printf("%.3f %.3f\n", ansx, ansy);
    x = y = ansx = ansy = 0;
  }
  

  return 0;
}