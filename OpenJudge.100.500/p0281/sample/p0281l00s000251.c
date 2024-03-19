#include<stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define N 100
#define INFTY 1<<21

void dijstr(void);
int n,A[N][N];

int main()
{
  int i,j,x,y,z,s;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=INFTY;}
                 }
  
  for(i=0;i<n;i++)
    {scanf("%d%d",&x,&y);
      for(j=0;j<y;j++){
	scanf("%d%d",&z,&s);
	A[x][z]=s; }
    }
  dijstr();
  return 0;
}
void dijstr()
{
  int color[N],d[N],p[N],mini;
  int i,u,v;
  for(i=0;i<n;i++){
    color[i]=WHITE;
    d[i]=INFTY;}
  d[0]=0;
  color[0]=GRAY;

  while(1)
    {
      mini=INFTY;
      u=-1;
      for(i=0;i<n;i++){
	if(mini>d[i]&&color[i]!=BLACK){
	  u=i;
	  mini=d[i];                  }
                       }
      if(u==-1)break;
      color[u]=BLACK;
      for(v=0;v<n;v++){
	if(color[v]!=BLACK &&A[u][v]!=INFTY){
	  if(d[v]>d[u]+A[u][v]){
	    d[v]=d[u]+A[u][v];
	    color[v]=GRAY; }}
	  }
    }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}

