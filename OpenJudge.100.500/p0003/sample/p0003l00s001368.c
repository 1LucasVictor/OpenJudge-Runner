#include <stdio.h>

int main(void){
  int a,b,c,d,e,f;
  int x1,y1;
  int i;
  double x,y;
  double  A,B;

  while(scanf("%d %d %d %d %d %d\n%",&a,&b,&c,&d,&e,&f) != EOF){

   

    A = (c*d-f*a);

    B = (b*d-e*a);

    y = (double)A/(double)B;

  
  
    x = (c-b*y)/a;


    if(x>=0){
      x1 = x*1000+0.5;
      x = (double)x1/1000;
    }else{
      x1 = (-1)*x*1000+0.5;
      x = (double)x1/1000*(-1);
    }

    if(y>=0){
      y1 = y*1000+0.5;
      y = (double)y1/1000;
    }else{
      y1 = (-1)*y*1000+0.5;
      y = (double)y1/1000*(-1);
    }
  
    printf("%.3lf %.3lf\n",x,y);
    
    i++;
  }
  return 0;
}