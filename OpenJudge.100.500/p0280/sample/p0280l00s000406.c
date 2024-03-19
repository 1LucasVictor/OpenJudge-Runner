#include <stdio.h>

int main()
{
  int sum=0,n,u,i,j,min;

  scanf("%d",&n);

  int g[n][n],d[n],p[n],color[n],tmp;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&tmp);
      if(tmp==-1){
        g[i][j]=2001;
      }
      else g[i][j]=tmp;
    }
  }

  for(i=0;i<n;i++){
    d[i]=2001;
    p[i]=-1;
    color[i]=0;
  }

   d[0]=0;

  while(1){

    min=2001;
    u=-1;

    for(i=0;i<n;i++){
      if(color[i]!=2 && d[i]<min){
        u=i;
        min=d[i];
      }
    }

    if(min==2001) break;

    color[u]=2;

    for(i=0;i<n;i++){
      if(color[i]!=2 && g[u][i]<d[i]){
        if(g[u][i]!=2001){
          p[i]=u;
          d[i]=g[u][i];
          color[i]=1;
        }
      }
    }
  }


  for(i=0;i<n;i++){
    if(p[i]!=-1)sum+=g[i][p[i]];
  }

  printf("%d\n",sum);

  return 0;

}
