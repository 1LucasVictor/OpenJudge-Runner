#include<stdio.h>

int main(void)
{
  int num;
  int i;

  scanf("%d", &num);

  for(i=1;i<=num;i++)
    {
      if (i%3==0)
	printf(" %d", i);
      else if (i%10==3)
	printf(" %d", i);
      else if (i/10==3)
	printf(" %d", i);
      else if (i/10%10==3)
	printf(" %d", i);
      else if (i/1/10%10==3)
	printf(" %d", i);
    }

  printf("\n");

  return 0;
}