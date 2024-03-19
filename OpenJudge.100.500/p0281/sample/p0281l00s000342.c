#include<stdio.h>
#define MAX 100
#define INFTY (1<<21)
void dikstra(void);
int white=0,gray=1,black=2;
int n,M[MAX][MAX];



int main(){
  int i,k,c,u,v,j;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
  for(j=0;j<n;j++){
      M[i][j]=INFTY;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d", &u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d", &v, &c);
      M[u][v]=c;
    }}

  dikstra();

  return 0;
}
  
void dikstra(){
  int minv,u,v,i;
  int d[MAX],color[MAX];
  for(i=0;i<n;i++){
    d[i]=INFTY;
    color[i]=white;
  }
  
  d[0]=0;
  color[0]=gray;
  while(1){
    minv=INFTY;
    u=-1;
    for(i=0;i<n;i++){if(minv>d[i]&&color[i]!=black){
	u=i;
	minv=d[i];}
    }
    
    if(u==-1)break;
    color[u]=black;
   for(v=0;v<n;v++){
     if(color[v]!=black&&M[u][v]!=INFTY){if(d[v]>d[u]+M[u][v]){d[v]=d[u]+M[u][v];
	 color[v]=gray;
       }}
    }
  }
  for(i=0;i<n;i++){
    printf("%d ", i);
    if(d[i]==INFTY)printf("-1");
    else printf("%d\n", d[i]);
  }}

