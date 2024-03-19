#include  <stdio.h>
/* Aizu Online Judge Problem 	 */
/* Volume0 0007:Debt Hell 	   */

int main(void)
{
  int week;
  int pay = 100000;
  double rate = 1.05;

  scanf("%d", &week);

  while(week)
  {
    pay *= rate;
    if(pay % 1000)
    {
      pay = (pay / 1000 + 1) * 1000;
    }
    week--;
  }
  printf("%d\n", pay);

  return 0;
}