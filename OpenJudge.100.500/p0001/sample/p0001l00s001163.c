#include<stdio.h>

int main(void)
{
  int a, b, c;

  while( scanf("%d %d", &a, &b) != EOF )
    {
      c = a + b;
      if(0 <= c&&c <= 9)
	{
	  printf("1\n");
	}

      else if(10 <= c&&c <= 99)
	{
	  printf("2\n");
	}

      else if(100 <= c&&c <= 999)
	{
	  printf("3\n");
	}

      else if(1000 <= c&&c <= 9999)
	{
	  printf("4\n");
	}

      else if(10000 <= c&&c <= 99999)
	{
	  printf("5\n");
	}

      else if(100000 <= c&&c <= 999999)
	{
	  printf("6\n");
	}

      else
	{
	  printf("7\n");
	}
    }
  return 0;
}