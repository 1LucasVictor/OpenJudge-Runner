#include<stdio.h>
#define W 0
#define B 1
#define inf 2000000
#define NIL -1
#define N 101
 
int main()
{
  int num,i,j,mcost;
  int u,v,a=0;
  int g[N][N];
  int d[N], p[N],c[N];
  
scanf("%d",&num);
for(i=1;i<=num;i++)
  {
    for(j=1;j<=num;j++)
      {
    scanf("%d",&g[i][j]);
      }
  }
  
for(u=1;u<=num;u++)
  {
    d[u] = inf;
    p[u] = NIL;
    c[u] = W;
  }
 d[1] = 0;
  
 while(1)
   {
     mcost =inf;
     for(i=1;i<=num;i++)
       {
     if(c[i]!=B && d[i]<mcost)
       {
         mcost = d[i];
         u=i;
       }
       }
     if(mcost ==inf)break;
  
     c[u]=B;
  
  
         for(v=1;v<=num;v++)
           {
         if(g[u][v] == -1) continue;
        else if(c[v]!=B && g[u][v]<d[v])
           {
             p[v] =u;
             d[v] = g[u][v];
           }
           }
       }
         
  
 for(i=1;i<=num;i++)
   a+=d[i];
 printf("%d\n",a);
 return 0;
}
