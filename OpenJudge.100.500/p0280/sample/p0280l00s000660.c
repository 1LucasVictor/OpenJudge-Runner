#include<stdio.h>
#define N 100
#define INF 100000000
#define A 0
#define B 1
#define C 2

int a,T[N][N];

int k(){
  int i,b,c=0,d;
  int e[N],f[N],g[N];

  for(i=0;i<a;i++){
    e[i]=INF;
    f[i]=-1;
    g[i]=A;
  }

  e[0]=0;

  while(1){
    d=INF;
    b=-1;
    for(i=0;i<a;i++){
      if(d>e[i] && g[i]!=B){
	b=i;
	d=e[i];
      }
    }
    if(b==-1)break;
    g[b]=B;

    for(i=0;i<a;i++){
      if(g[i]!=B&&T[b][i]!=INF){
	if(e[i]>T[b][i]){
	  e[i]=T[b][i];
	  f[i]=b;
	  g[i]=C;
	}
      }
    }
  }
  for(i=0;i<a;i++){
    if(f[i]!=-1)c+=T[i][f[i]];
		  }
  return c;
}

int main(){
  int i,j,b;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    for(j=0;j<a;j++){
      scanf("%d",&b);
      T[i][j]=(b==-1)?INF :b;
    }
  }
  printf("%d\n",k());
  return 0;
}
  

