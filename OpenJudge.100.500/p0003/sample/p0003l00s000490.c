#include<stdio.h>



int main(void){
  float a,b,c,d,e,f;
  float x,y;
  // a((f - ey) / d) + by = c

  //y(- ae  +bd) =cd -af 

  for(;;){

    if(scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f)!= 6)
      break;
    
    if(a == 0){
      y = c / b;
      x =  (f - e*(c/b)) / d;
    }else{
      y = (c*d - a*f) / (b*d - a*e);
      x = (c - b*y) / a;
    }
    
    printf("%.3f %.3f\n",x,y);
  }

  return 0;
}