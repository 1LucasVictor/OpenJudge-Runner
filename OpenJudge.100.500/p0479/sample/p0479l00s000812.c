#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  long int n;
  long int a[200000]={};
  int i,j;

  scanf("%ld",&n);
  for(i=1;i<n;i++)
  {
    scanf("%d",&j);
    a[j]++;
  }

  for(i=1;i<n;i++)
  {
    printf("%ld\n",a[i]);
  }
  printf("0\n");

  return 0;
}
