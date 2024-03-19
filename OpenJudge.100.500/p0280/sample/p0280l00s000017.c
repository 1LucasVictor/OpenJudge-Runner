#include<stdio.h>
#define WHITE 0
#define BLACK 1
#define INF 2000
#define NIL -1
#define N 100
 
int main()
{
  int n,i,j,mincost,x,y,a=0;
  int b[N][N],d[N],p[N],q[N];
  
scanf("%d",&n);
for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
      {
    scanf("%d",&b[i][j]);
      }
  }
  
for(x=1;x<=n;x++)
  {
    d[x] = INF;
    p[x] = NIL;
    q[x] = WHITE;
  }
 d[1] = 0;
  
 while(1)
   {
     mincost =INF;
     for(i=1;i<=n;i++){
     if(q[i]!=BLACK && d[i]<mincost)
       {
         mincost = d[i];
         x = i;
       }
     }
     if(mincost ==INF) break;
  
     q[x] = BLACK; 
  
     for(y=1;y<=n;y++){
       if(b[x][y] == -1) continue;
       else if(q[y]!=BLACK && b[x][y]<d[y])
	 {
	   p[y] = x;
	   d[y] = b[x][y];
	 }
     }
   }
         
 for(i=1;i<=n;i++) a += d[i];
 printf("%d\n",a);
 return 0;
}
 