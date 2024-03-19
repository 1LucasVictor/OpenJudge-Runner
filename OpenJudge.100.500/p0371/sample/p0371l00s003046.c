#include<stdio.h>

int main(void)
{
  int num;
  int x[10001];
  int min, max, sum=0;
  int i;

  scanf("%d", &num);
  for(i=0;i<num;i++)
    {
      scanf("%d", &x[i]);
    }

  min = x[0];
  max = x[0];

  for(i=0;i<num;i++)
    {
      if(min > x[i])
	min = x[i];
      if(max < x[i])
	max = x[i];
      sum += x[i];
    }

  printf("%d %d %d\n", min, max, sum);

  return 0;
}