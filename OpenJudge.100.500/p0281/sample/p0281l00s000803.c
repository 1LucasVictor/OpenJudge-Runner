//Single Source Shortest Path 1

#include<stdio.h>
#define N 100
#define FIR 0
#define SEC 1
#define FIN 2
#define INF 1000000

int arr[N][N],state[N],point[N];
int n,i,j,l,remain,b,weight,min;

void worktime()
{
  //initialize number
  for(i = 0; i < n; i++)
    {
      point[i] = INF;
      state[i] = FIR;
    }
  point[0] = 0;
  state[0] = SEC;

  while(1)
    {
      //initialize min
      min = INF;
      l = -1;

      //prepare for work
      for(i = 0; i < n; i++)
	{
	  if(min > point[i] && state[i] != FIN)
	    {
	      l = i;
	      min = point[i];
	    }
	}

      if(l == -1) break;
      state[l] = FIN;

      //main work
      for(b = 0; b < n; b++)
	{
	  if(state[b] != FIN && arr[l][b] != INF && point[b] > point[l] + arr[l][b])
	    {
	      point[b] = point[l] + arr[l][b];
	      state[b] = SEC;
	    }
	}
    }

  //output data
  for(i = 0; i < n; i++)
    {
      if(point[i] != INF) printf("%d %d\n",i,point[i]);
    }
}

int main()
{
  //input data
  scanf("%d",&n);
  for(i = 0; i < n; i++)
    {
      for(j = 0; j < n; j++)
	{
	  arr[i][j] = INF;
	}
    }
  for(i = 0; i < n; i++)
    {
      scanf("%d %d",&l,&remain);

      for(j = 0; j < remain; j++)
	{
	  scanf("%d %d",&b,&weight);
	  arr[l][b] = weight;
	}
    }

  worktime();
  
  return 0;
}

