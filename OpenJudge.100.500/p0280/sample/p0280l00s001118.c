#include<stdio.h>
#define N 100
#define A -1
int main(){
  int n,i,j,x,t,u,v;
  int a[N][N],b[N],c[N],d[N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&x);
      if(x==A){
	a[i][j]=2000;
      }
      else a[i][j]=x;
    }
  }

  for(i=0;i<n;i++){
    b[i]=2000;
    c[i]=A;
    d[i]=0;
  }
  b[0]=0;

  while(1){
    t=2000;
    u=A;
    for(i=0;i<n;i++){
      if(t>b[i] && !d[i]){
	u=i;
	t=b[i];
      }
    }
    if(u==A) break;
    d[u]=1;
    for(v=0;v<n;v++){
      if(!d[v] && a[u][v] != 2000){
	if(b[v]>a[u][v]){
	  b[v]=a[u][v];
	  c[v]=u;
	}
      }
    }
  }
  int s=0;

  for(i=0;i<n;i++){
    if(c[i] != A){
      s += a[i][c[i]];
    }
  }

  printf("%d\n",s);
  return 0;
}
    
    
		 

