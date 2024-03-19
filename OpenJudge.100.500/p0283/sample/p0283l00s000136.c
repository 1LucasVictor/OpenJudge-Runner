#include<stdio.h>
#define N 8
#define F -1
#define T 1

int Queen[N][N], A[N], B[N], C[2*N-1], D[2*N-1];

void print(int num)
{
  int i, j;
  if(num == N)
    {
      for(i = 0; i < N; i++)
	{
	  for(j = 0; j < N; j++)
	    {
	      if(Queen[i][j] == 1)
		{
		  if(A[i] != j)
		    {
		      return ;
		    }
		}
	    }
	}
      for(i = 0; i < N; i++)
	{
	  for(j = 0; j < N; j++)
	    {
	      if(A[i] == j)
		{
		  printf("Q");
		}
	      else
		{
		  printf(".");
		}
	    }
	  printf("\n");
	}
      return ;     
    }
  else
    {
      for(i = 0; i < N; i++)
	{
	  if(B[i] == T || C[i+num] == T || D[num-i+N-1] == T)
	    {
	      continue;
	    }
	  else
	    {
	      A[num] = i;
	      B[i] = T;
	      C[num+i] = T;
	      D[num-i+N-1] = T;
	      print(num+1);
	      B[i] = F;
	      C[i+num] = F;
	      D[num-i+N-1] = F;
	    }
	}
    }
}
int main()
{
  int n, i, j, v, s;
  scanf("%d", &n);
  for(i = 0; i < N; i++)
    {
      for(j = 0; j < N; j++)
	{
	  Queen[i][j] = 0;
	}
    }
  for(i = 0; i < N; i++)
    {
      A[i] = F;
      B[i] = F;
    }
  for(i = 0; i < 2*N-1; i++)
    {
      C[i] = F;
      D[i] = F;
    }
  for(i = 0; i < n; i++)
    {
      scanf("%d%d", &v, &s);
      Queen[v][s] = 1;
    }
  print(0);
  return 0;
}

