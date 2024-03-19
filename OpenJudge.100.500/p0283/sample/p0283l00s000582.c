#include<stdio.h>
#include<stdlib.h>

#define N 8
#define F -1
#define NF 1

int r[N],c[N],dp[2*N-1],dn[2*N-1],Z[N][N];


void A()
{
  int i;
  
  for(i=0;i<N;i++)
    {
      r[i]=F;
      c[i]=F;
    }

  for(i=0;i<2*N-1;i++)
    {
      dp[i]=F;
      dn[i]=F;
    }
}

void B()
{
  int i,j;
  
  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  if(Z[i][j])
	    {
	      if(r[i]!=j)
		{
		  return;
		}
	    }
	}
    }

  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  printf("%s",(r[i]==j)?"Q":".");
	}
      
      putchar('\n');
    }
}

void C(int i)
{
  int j;
  
  if(i==N)
    {
      B();
	  
      return;
    }

  for(j=0;j<N;j++)
    {
      if(NF==c[j]||NF==dp[i+j]||NF==dn[i-j+N-1])
	{
	  continue;
	}

      r[i]=j;
      c[j]=dp[i+j]=dn[i-j+N-1]=NF;

      C(i+1);

      r[i]=c[j]=dp[i+j]=dn[i-j+N-1]=F;
    }
}



int main(void)
{
  int i,j,n,a,b;
  
  
  A();

  for(i=0;i<N;i++)
    {
      for(j=0;j<N;j++)
	{
	  Z[i][j]=0;
	}
    }

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      scanf("%d%d",&a,&b);

      Z[a][b]=1;
    }

  C(0);
}

