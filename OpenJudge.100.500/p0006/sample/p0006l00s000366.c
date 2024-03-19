#include <stdio.h>
int main()
{
  int n,i;
  unsigned long int debt_price;
  scanf("%d",&n);
  debt_price = 100000;
  for(i=0; i<n; i++){
       debt_price *= 1.05;
       if(debt_price % 1000 )
       debt_price =(debt_price/1000+1)*1000;
       }
  printf("%lu\n",debt_price);
  return 0;
}    