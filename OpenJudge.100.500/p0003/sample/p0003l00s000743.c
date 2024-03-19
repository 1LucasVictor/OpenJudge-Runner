#include <stdio.h>

int main(void){
  double a,b,c,d,e,f;
  double x,y;

  while( 1 ){
    if( scanf("%lf %lf %lf %lf %lf %lf ",
	      &a,&b,&c,&d,&e,&f )!=6 )
      break;
    x =( f-e*c/b)/(d-a*e/b);
    y =(c-a*x)/b;
    printf("%.3f %.3f\n",x,y);
  }

  return 0;
}