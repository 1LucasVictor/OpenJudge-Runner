#include <stdio.h>

int square(int x);

int main(void)
{
  int i, a, temp, tcount, sides[3];

  scanf("%d", &tcount);

  for(a=0; a<tcount; a++)
    {
      scanf("%d %d %d", &sides[0], &sides[1], &sides[2]);

      for(i = 0; i < 2; i++)
        {
          if(sides[i + 1] < sides[i])
            {
              temp = sides[i];
              sides[i] = sides[i + 1];
              sides[i + 1] = temp;
            }
        }
        
      if(square(sides[2]) == (square(sides[0]) + square(sides[1])))
        {
          printf("YES\n");
        }else{
          printf("NO\n");
        }
    }

  return 0;
}

int square(int x)
{
  return x * x;
}