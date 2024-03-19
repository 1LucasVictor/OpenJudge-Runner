/*
A0021
 */

#include <stdio.h>
#define EPS (1e-10)
main()
{
  float x1,x2,y1,y2,x3,y3,x4,y4;
  int i,n;



  while(EOF!=scanf("%d",&n))
    {
	scanf(" %f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
  
      if((x1 == x2) && (x3 == x4))
	printf("YES\n");
      else if((x1 == x2) || (x3 == x4))
	printf("NO\n"); 
      else if(abs((y1-y2)/(x1-x2)-(y3-y4)/(x3-x4))<EPS)
	printf("YES\n");
      else
	printf("NO\n");
    }
  return(0);
}