#include <stdio.h>
#define MAX 100
#define N 10000000
#define W 0
#define B 1

int n,C[MAX],X[MAX][MAX],Y[MAX],Z[MAX];

void pfarm(){

  int min,i,j;

  for(i=0;i<n;i++){
    Y[i]=N;
    Z[i]=-1;
    C[i]=W;
  }

  Y[0]=0;

  while(1){
    min = N;
    for(i=0;i<n;i++){
      if(C[i]!=B&&Y[i]<min){
	min=Y[i];
	j=i;
      }
    }

    if(min==N)
      break;
    C[j]=B;

    for(i=0;i<n;i++){
      if(C[i]!=B&X[j][i]<Y[i]&&X[j][i]>=0){
	Z[i]=j;
	Y[i]=X[j][i];
      }
    }
  }
}

int main(){

  int i,j,count=0;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&X[i][j]);
    }
  }
  pfarm();
  for(i=0;i<n;i++){
    count+=Y[i];
  }
  printf("%d\n",count);
  return 0;
}

