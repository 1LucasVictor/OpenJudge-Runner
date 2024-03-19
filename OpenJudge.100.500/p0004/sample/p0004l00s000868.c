#include  <stdio.h>
/* Aizu Online Judge Problem 	*/
/* Volume0 0005:GCD and LCM 	*/

int main(void)
{
  int dat1, dat2;
  int gcd, lcm;
  int min, max;

  while(scanf("%d %d", &dat1, &dat2) != EOF)
  {
    lcm = min = (dat1 < dat2) ? dat1 : dat2;
    gcd = max = (dat1 > dat2) ? dat1 : dat2;
    //LCM
    while(lcm > 1)
    {
      if( !(dat1 % lcm) && !(dat2 % lcm) )
        break;
      lcm--;
    }

    //GCD
    while(1)
    {
      if( gcd % min == 0 )
        break;
      gcd += max;
    }

    printf("%d %d\n", lcm, gcd);
  }

  return 0;
}