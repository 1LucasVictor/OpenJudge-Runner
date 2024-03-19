#include <stdio.h>

int main(void)
{
     int i, j, n;
     
     double x1=0, y1=0, x2=0, y2=0, x3=0, y3=0, x4=0, y4=0, ab, cd, t;

     scanf("%d", &n);
     

     for(i=1; i<=n; i++){
	  for(j=1; j<=8; j++){
	       
	       scanf("%lf", &t);
	       x1 = y1;
	       y1 = x2;
	       x2 = y2;
	       y2 = x3;
	       x3 = y3;
	       y3 = x4;
	       x4 = y4;
	       y4 = t;
	  }
	  ab = (y2 - y1) / (x2 - x1);
	  if(x2-x1==0) ab = 0;
	  else if(y2-y1==0) ab = 101;
	  cd = (y4 - y3) / (x4 - x3);
	  if(x4-x3==0) cd = 0;
	  else if(y4-y3==0) cd = 101;
	  
	  if(ab==cd) printf("YES\n");
	  else printf("NO\n");
     }

     return 0;
}