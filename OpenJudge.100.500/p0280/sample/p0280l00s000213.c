#include<stdio.h>
#define INFTY (2<<9)

int A[100][100];

int prim(int n)
{
  int i,m,l,sum=0,S[100],T[100],P[100];

  for(i=0;i<n;++i)
    {
      S[i]=INFTY;
      P[i]=-1;
      T[i]=0;
    }
  S[0]=0;
  while(1)
    {
      l=INFTY;
      m=-1;
      for(i=0;i<n;++i)
        {
          if(T[i]!=2 && l>S[i])
            {
              m=i;
              l=S[i];
            }
        }
      if(m==-1)
        {
          break;
        }
      T[m]=2;
      for(i=0;i<n;++i)
        {
          if(T[i]!=2 && A[m][i]!=INFTY)
            {
              if(S[i]>A[m][i])
                {
                  S[i]=A[m][i];
                  P[i]=m;
                  T[i]=1;
                }
            }
        }
    }
  for(i=0;i<n;++i)
    {
      if(P[i]!=-1)
        {
          sum+=A[i][P[i]];
        }
    }
  return sum;
}

int main()
{
  int n,i,j,x;
  scanf("%d",&n);
  for(i=0;i<n;++i)
    {
      for(j=0;j<n;++j)
        {
          scanf("%d",&x);
          A[i][j]=(x==-1)?INFTY:x;
        }
    }
  printf("%d\n",prim(n));
  return 0;
}

