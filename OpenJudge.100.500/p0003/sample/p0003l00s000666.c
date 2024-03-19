#include <stdio.h>

int main(int argc,char* argv[]){
  
  int a,b,c,d,e,f;
  double per_x_a_to_d;
  double y;
  double x;

  while(scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f) != EOF){
    if(d == 0){
      y = (double)(f)/e;
    }else{
      per_x_a_to_d = ((double)(a))/d;
      y = (c - per_x_a_to_d*f)/(b - per_x_a_to_d*e);
    }
    
    if(a == 0){
      x = (f - e*y)/d; 
    }else{
      x = (c - b*y)/a;
    }
    printf("%.3lf %.3lf\n",x,y);
  }
  
  
  return 0;
}