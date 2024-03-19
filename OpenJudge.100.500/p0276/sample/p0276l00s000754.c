#include<stdio.h>
#include<stdlib.h>
#define N 101

void AdjacencyList(int,int,int *);
int A[N][N];

int main(){
  int u[N],v[N],i,j,d,n,k;

  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&u[i]);
    scanf("%d",&d);
    for(j=1;j<=d;j++){
      scanf("%d",&v[j]);
    }
    AdjacencyList(n,d,v);
  }
  for(k=1;k<=n;k++){
    for(j=1;j<=n;j++){
      if(A[k][j]==1){
	printf("%d",A[k][j]);
	if(j!=n)
	  printf(" ");
      }
      if(A[k][j]!=1){
	printf("0");
	if(j!=n)
	  printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}



  void AdjacencyList(int n,int d,int *v){
    int i,j;
    int static k=1;
    for(i=1;i<=n;i++){
      for(j=1;j<=d;j++){
	if(v[j]==i)
	  A[k][i]=1;
      }   
    }
    k++;
  }