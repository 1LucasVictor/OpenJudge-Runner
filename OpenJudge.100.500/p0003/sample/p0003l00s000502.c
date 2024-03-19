#include <stdio.h>


int main(void)
{
  int a[6] = {};
  int i = 0;
  double x,y;
  
  while (scanf("%d", &a[0])!= EOF){
    for(i = 1; i < 6; i++)
      scanf("%d", &a[i]);
    y = 1.0 *( a[3]*a[2] - a[0]*a[5] )/( a[3] * a[1]- a[0] * a[4]);
    x = 1.0 *( a[2] - a[1]*y ) / a[0];
    
    printf("%.3f %.3f",x ,y);
  }
    
    return 0;
}