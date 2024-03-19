#include <stdio.h>
#define M 100
#define I (1<<21)
#define W 0
#define G 1
#define B 2

int n,A[M][M];

void ds(){
  int v,i,j,t;
  int d[M],clr[M];

  for(i=0;i<n;i++){
    d[i]=I;
    clr[i]=W;
  }

  d[0]=0;
  clr[0]=G;
  while(1){
    v=I;
    j=-1;
    for(i=0;i<n;i++){
      if(v>d[i] && clr[i] != B){
	j=i;
	v=d[i];
      }
    }
    if(j == -1)break;
    clr[j]=B;
    for(t=0;t<n;t++){
      if(clr[t] != B && A[j][t] != I){
	if(d[t] > d[j] + A[j][t]){
	  d[t]=d[j]+A[j][t];
	  clr[t]=G;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}
    
  

int main(){
  int i,j,k,s,t,u;

    scanf("%d",&n);

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	A[i][j]=I;
      }
    }

    for(i=0;i<n;i++){
      scanf("%d %d",&k,&s);
      for(j=0;j<s;j++){
	scanf("%d %d",&t,&u);
	A[k][t]=u;
      }
    }
    ds();

    return 0;
}

