#include<stdio.h>
#include<stdlib.h>
#define N 100

int n,u=0;
int d[N],k[N];
int v[N][N],c[N][N];


void SSSP(int n,int x)
{
  int i;

  d[n]=x;

  for(i=0;i<k[n];i++){
    if(d[v[n][i]]>x+c[n][i]){
      SSSP(v[n][i],x+c[n][i]);
    }
  }
}

int main(){

  int i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k[u]);

    for(j=0;j<k[u];j++){
      scanf("%d %d",&v[u][j],&c[u][j]);
    }
  }
  for(i=0;i<n;i++){
    d[i]=100000;
  }
 
SSSP(0,0);
 
 for(i=0;i<n;i++){
   printf("%d %d\n",i,d[i]);
 }
 return 0;
}