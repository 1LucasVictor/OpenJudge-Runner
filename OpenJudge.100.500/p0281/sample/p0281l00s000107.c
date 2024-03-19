#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j;
  int u,v,c,k,l;
  int M[MAX][MAX],d[MAX],N[MAX];

  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }

  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }

  for(i=0;i<n;i++)
    {
      N[i]=0;
      d[i]=INFTY;
    }
  d[0]=0;

  while(1)
    {
      l=INFTY;
      u=-1;
      for(i=0;i<n;i++)
	{
	  if(d[i]<l&&N[i]==0)
	    {
	      u=i;
	      l=d[i];
	    }
	}

      if(u==-1) break;

      N[u]=1;

      for(v=0;v<n;v++)
	{
	  if(d[v]>=d[u]+M[u][v])
	    {
	      d[v]=d[u]+M[u][v];
	    }
	}
    }
 

  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  }

  return 0;
}