#include<stdio.h>

#define MAX 101
#define NIL -1

int main()
{
  int n,A[MAX][MAX],i,j,k,v,id;

  scanf("%d",&n);

  for(i = 1 ; i <= n ; i++)
    {
      for(j = 1 ; j <= n ; j++)
	{
	  A[i][j] = NIL;
	}
    }

  for(i = 1 ; i <= n ; i++)
    {
      scanf("%d",&id);
      scanf("%d",&k);
      for(j = 1 ; j <= k ; j++)
	{
	  scanf("%d",&v);
	  A[id][v] = v;
	}
    }

  for(i = 1 ; i <= n ; i++)
    {
      for(j = 1 ; j <= n ; j++)
	{
	  if(A[i][j] != NIL)
	    {
	      printf("1");
	    }
	  else printf("0");
	  if(j != n) printf(" ");
	}
      printf("\n");
    }
  
  return 0;
}


