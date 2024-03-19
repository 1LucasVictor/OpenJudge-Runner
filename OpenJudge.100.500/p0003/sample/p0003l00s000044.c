#include<stdio.h>

void zero(double*);

int main(){
  int a,b,c,d,e,f;
  double x,y;

  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){
    x = (double)(c*e-b*f)/(double)(a*e-d*b);
    y = ((double)c-(double)a*x)/(double)b;
    zero(&x);
    zero(&y);
    printf("%.3f %.3f\n",x,y);
  }

  return 0;
}

void zero(double *x){
  if(*x == 0.0){
    *x = 0.0;
  }
}

