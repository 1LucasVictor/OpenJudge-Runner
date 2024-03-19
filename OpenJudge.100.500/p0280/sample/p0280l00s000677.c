#include<stdio.h>
#define MAX 101
#define INF 2001

int n;
int a[MAX][MAX];
int d[MAX];
int co[MAX];

int Spani();

int main(){
  int i,j;
  int k=0,t=0;
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    
    for(j=1;j<=n;j++){
      scanf("%d",&a[i][j]);
      if(a[i][j]==-1) a[i][j]=INF;
    }
    co[i]=0;
    d[i]=INF;
  }
  k=Spani();

  printf("%d\n",k);
  
  return 0;
}

int Spani(){
  int i,min;
  int s=0,c=0,u=1;
  
  d[1]=0;
  co[1]=1;
  c++;

  while(c<=n){

    for(i=1;i<=n;i++){
      if(a[u][i]<d[i]) d[i]=a[u][i];
    }

    min=INF;
    
    for(i=1;i<=n;i++){
      
      if(d[i]<min && co[i]!=1){
	min=d[i];
	u=i;

      }
      
    }

    if(min!=INF) s+=min;
    co[u]=1;
    c++;
  }
  
  return s;
}


