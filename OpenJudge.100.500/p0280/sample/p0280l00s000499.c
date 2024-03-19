#include <stdio.h>
#define N 100
#define MAX 10000000
#define W 0
#define B 1

int n,c[N],A[N][N],X[N],Y[N];

void prim(){
  int m,i,j;

  for(i=0;i<n;i++){
    X[i]=MAX;
    Y[i]=-1;
    c[i]=W;
  }

  X[0]=0;

  while(1){
    m=MAX;
    for(i=0;i<n;i++){
      if(c[i]!=B && X[i]<m){
	m=X[i];
	j=i;
      }
    }

    if(m==MAX) break;
    c[j]=B;

    for(i=0;i<n;i++){
      if(c[i]!=B && A[j][i]<X[i] && A[j][i]>=0){
	Y[i]=j;
	X[i]=A[j][i];
      }
    }
  }
}

  int main(){
    int i,j,count=0;

    scanf("%d",&n);

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	scanf("%d",&A[i][j]);
      }
    }
    
    prim();
    for(i=0;i<n;i++)count+=X[i];

    printf("%d\n",count);

    return 0;
  }

