#include <stdio.h>
 
int main(void){

  double x1,y1,x2,y2,x3,y3,x4,y4;
  double t_x1,t_y1,t_x2,t_y2;
  double result;
  int dataset;
  int i; 
   
  scanf("%d",&dataset);
 
  for(i = 0;i < dataset; ++i){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
     
    t_x1 = x1 - x2;
    t_y1 = y1 - y2;
    t_x2 = x3 - x4;
    t_y2 = y3 - y4;
     
    result= t_x1 * t_y2 - t_y1 * t_x2;
     
    if(result <= 1e-10 && result >= -1e-10){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
     
  }
}