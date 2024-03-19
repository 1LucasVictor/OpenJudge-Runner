#include<stdio.h>
#define N 1000

int main(void)
{
  int i, j, size;
  int a[N][3];

  scanf("%d", &size);

  for(i = 0 ; i <= size-1 ; i++)
    {
      for(j = 0 ; j <= 2 ; j++)
	{
          scanf("%d", &a[i][j]);
	}  
    }

  for(i = 0 ; i <= size-1 ; i++)
    {
      if(a[i][0] > a[i][1]&&a[i][0] > a[i][2])
	{
	  if(a[i][0]*a[i][0] == a[i][1]*a[i][1] + a[i][2]*a[i][2])
	    {
	      printf("YES\n");
	    }

	  else
	    {
	      printf("NO\n");
	    }
	}

      else if(a[i][1] > a[i][0]&&a[i][1] > a[i][2])
	{
	  if(a[i][1]*a[i][1] == a[i][0]*a[i][0] + a[i][2]*a[i][2])
	    {
	      printf("YES\n");
	    }

	  else
	    {
	      printf("NO\n");
	    }

	}

      else if(a[i][2] > a[i][0]&&a[i][2] > a[i][1])
	{
	  if(a[i][2]*a[i][2] == a[i][0]*a[i][0] + a[i][1]*a[i][1])
	    {
	      printf("YES\n");
	    }

	  else
	    {
	      printf("NO\n");
	    }
	}

      else
	{
	  printf("NO\n");
	}  
    }
  return 0;
}