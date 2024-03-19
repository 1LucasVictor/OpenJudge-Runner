#include<stdio.h>
#include<string.h>

char wd[10][10];
int bk[10],t,n,m,a[20],d[20],c[10];
void Dfs(int x){
  if(c[x]==1)
    Dfs(x+1);
  if(x==8){
    for(int i=0;i<8;i++)
      printf("%s\n",wd[i]);
    return;
  }
  for(int i=0;i<8;i++)
    {
      if(bk[i]==0&&a[x+i]==0&&d[x-i+8]==0)
        {
	  bk[i]=1;
	  a[x+i]=1;
	  d[x-i+8]=1;
	  wd[x][i]='Q';
	  Dfs(x+1);
	  bk[i]=0;
	  a[x+i]=0;
	  d[x-i+8]=0;
	  wd[x][i]='.';
        }
    }
}
int main()
{
  scanf("%d",&t);
  for(int i=0;i<8;i++)
    for(int j=0;j<8;j++)
      wd[i][j]='.';
  for(int i=0;i<t;i++)
    {
      scanf("%d%d",&n,&m);
      wd[n][m]='Q';
      bk[m]=1;
      a[n+m]=1;
      d[n-m+8]=1;
      c[n]=1;
    }
  Dfs(0);
  return 0;
}

