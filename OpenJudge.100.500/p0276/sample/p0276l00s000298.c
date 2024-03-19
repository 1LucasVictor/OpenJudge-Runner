#include<stdio.h>
#define N 101

int main()
{
  int n,sum[N][N],a,b,c,d,e,f,g;

  scanf("%d",&n);
  
  for(a=0;a<n+1;a++){
    for(b=0;b<n+1;b++){
      sum[a][b]=0;
    }
  }
  for(a=0;a<n;a++){
    scanf("%d %d ",&c,&d);
    for(b=0;b<d;b++){
      scanf("%d",&e);
      sum[c -1][e-1]=1;
    }
  }
  for(a=0;a<n;a++)
    {
      for(b=0;b<n;b++)
	{
	  printf("%d",sum[a][b]);
	  if(b!=n-1)
	    {
	      printf(" ");
	    }
	}
      printf("\n");
    }
  return 0;
}

	

