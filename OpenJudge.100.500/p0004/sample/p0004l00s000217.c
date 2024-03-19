#include  <stdio.h>
/* Aizu Online Judge Problem 	*/
/* Volume0 0005:GCD and LCM 	*/

int main(void)
{
  int dat1, dat2;
  int gcd, lcm;
  int min;

  while(scanf("%d %d", &dat1, &dat2) != EOF)
  {
    //LCM
    lcm = min = (dat1 < dat2) ? dat1 : dat2;
    while(lcm > 1)
    {
      if( !(dat1 % lcm) && !(dat2 % lcm) )
        break;
      lcm--;
    }

    //GCD
    gcd  = (dat1 > dat2) ? dat1  : dat2 ;
    while(1)
    {
      if( gcd % min == 0 )
        break;
      gcd += (dat1 > dat2) ? dat1 : dat2;
    }

    printf("%d %d\n", lcm, gcd);
  }

  return 0;
}