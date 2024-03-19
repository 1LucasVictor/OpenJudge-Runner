#include <stdio.h>
#define MAX 8
#define Y 1
#define N -1

int A[MAX][MAX],c[MAX],b[MAX],d[2*MAX-1],e[2*MAX-1];

void full(){
  int i,j;
  for(i=0;i<MAX;i++){
    d[i]=c[i]=N;
  }
  for(i=0;i<2*MAX-1;i++){
    d[i]=e[i]=N;
  }
}

  void Bord(){
    int i,j;
    for(i=0;i<MAX;i++){
      for(j=0;j<MAX;j++){
	if(A[i][j]==1){
	  if(b[i]!=j)
	    return;
	}
      }
    }

    for(i=0;i<MAX;i++){
      for(j=0;j<MAX;j++){
	if(b[i]==j){
	  printf("Q");
	}
	else{
	  printf(".");
	}
      }
	printf("\n");
      }
    }

    void Que(int i){
      int j;
      if(i==MAX){
	Bord();
	return;
      }
      for(j=0;j<MAX;j++){
	if(c[j]==Y||d[i+j]==Y||e[i-j+MAX-1]==Y)
	  continue;
	b[i]=j;
	c[j]=d[i+j]=e[i-j+MAX-1]=Y;
	Que(i+1);
	c[j]=d[i+j]=e[i-j+MAX-1]=N;
      }
    }

    int main(){
      int i,j,n,k,w;
      full();
      for(i=0;i<MAX;i++){
	for(j=0;j<MAX;j++){
	  A[i][j]=0;
	}
      }
      scanf("%d",&n);
      i=0;
      while(i<n){
	scanf("%d%d",&k,&w);
	A[k][w]=1;
	i++;
      }
      Que(0);
      return 0;
    }

