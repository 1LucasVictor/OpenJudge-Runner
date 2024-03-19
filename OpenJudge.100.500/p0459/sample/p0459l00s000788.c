#include <stdio.h>
#include <math.h>
int main(void)
{
  double c,f;
  double x, y;
  double matrix;

  scanf("%lf %lf",&c,&f);
  
	matrix = -2;

	
	x = (2*c - f) / matrix;
	y = (f - 4*c) / matrix;

  if(x >= 0)
  {
    if(y >= 0)
    {
      if (ceil(x) == floor(x))
      {
        if (ceil(y) == floor(y))
        {
          printf("Yes");
        }
        else
        {
          printf("No");
        }
      }
      else
      {
        printf("No");
      }
    }
    else
    {
      printf("No");
    }
  }
  else
  {
    printf("No");
  }
	return 0;
}