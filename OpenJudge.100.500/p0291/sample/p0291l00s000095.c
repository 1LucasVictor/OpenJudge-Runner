#include<stdio.h>

int main(void)
{
  int array[200000];
  int max=-10000000;
  int min;
  int diff;
  int i;
  int n;

  scanf("%d", &n);
//  printf("%d", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &array[i]);
  }

  min = array[0];

  for(i=1; i<n; i++)
  {   
    diff = array[i] - min;
    if(diff > max)
      max = diff;
    if(array[i] < min)
      min = array[i];
  }
  printf("%d\n", max);
  return 0;
}