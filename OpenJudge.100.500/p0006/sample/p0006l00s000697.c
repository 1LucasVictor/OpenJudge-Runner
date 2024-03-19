#include<stdio.h>
int main(void)
{
  int debt=100000, a, i=0;

  scanf("%d", &a);

  for (i=0;i<a;i++){
    debt=debt*1.05;

    if(debt%1000)
      debt=debt-debt%1000+1000;
  }

  printf("%d\n",debt);

  return 0;
}