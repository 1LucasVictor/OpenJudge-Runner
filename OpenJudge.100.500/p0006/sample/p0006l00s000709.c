#include <stdio.h>
#define FIRSTDEBT 100000

int main()
{
  int n;
  long int debt=100000;
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++) debt *=1.05;
  debt +=10000; debt -=debt%10000;
  printf("%ld\n",debt);
  
  return 0;
}