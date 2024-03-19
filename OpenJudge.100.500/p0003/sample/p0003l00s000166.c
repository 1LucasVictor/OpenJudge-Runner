#include <stdio.h>

int main(void){
  int a,b,c,d,e,f;
  int z;
  double x,y;

  while( 1 ){
    if( scanf("%d %d %d %d %d %d ",&a,&b,&c,&d,&e,&f)!=6 )
      break;

    z = a*e-b*d;
    x =  c*e-b*f;
    y = -c*d+a*f;

    x = x/z;
    y = y/z;
    printf("%5.3f %5.3f\n",x,y);
  }

  return 0;
}