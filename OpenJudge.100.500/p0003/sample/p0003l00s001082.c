#include <stdio.h>
#include <math.h>

double round_d(double x){
return floor(x + 0.5);
}

int main(void){

  int a,b,c,d,e,f,A,A1,A2;
  double x,y;

  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f)!=EOF){

    A = a*e-b*d;
    A1 = c*e-b*f;
    A2 = a*f-c*d;
    x = A1/A;
    y=A2/A;    

    printf("%.3f %.3f\n",round_d(x),round_d(y));

  }

  return 0;
}