#include<stdio.h>

typedef struct test
{
  int h;
  int w;
}test;

int main()
{
  test a[100];
  int count=0;
  scanf("%d%d", &a[count].h, &a[count].w);
  while(a[count].h != 0 || a[count].w != 0)
    {
      count++;
      scanf("%d%d", &a[count].h, &a[count].w);
    }
  for(int i = 0; i<count; i++)
    {
      for(int j = 0; j<a[i].h; j++)
	{
	  for(int k = 0; k<a[i].w; k++)
	    {
	      if((j>0&&j<a[i].h-1)&&(k>0&&k<a[i].w-1))
		{
		  printf(".");
		}
	      else
		{
		  printf("#");
		}
	    }
	  printf("\n");
	}
      printf("\n");
    }
}

