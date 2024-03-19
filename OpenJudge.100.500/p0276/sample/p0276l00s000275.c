#include<stdio.h>
#include<stdlib.h>

void matrix(int**,int*,int);

int main(){
  int *vertex;
  int **num;
  int n,m;
  int i,j;

  scanf("%d",&n);

  num=malloc(sizeof(int*)*(n+1));
  vertex=malloc(sizeof(int)*(n+1));
  
  for(i=0;i<n+1;i++){
    num[i]=malloc(sizeof(int)*(n+1));
  }
  
  
  for(i=0;i<n+1;i++){
    for(j=0;j<n+1;j++){
      num[i][j]=0;
    }
  }

  for(i=1;i<=n;i++){
    scanf("%d%d",&vertex[i],&m);
    for(j=1;j<m+1;j++){
      scanf("%d",&num[vertex[i]][j]);
    }
  }

  matrix(num,vertex,n);

  return 0;
}


void matrix(int **num,int *vertex,int n){
  int i,j,k,frag;
  for(i=1;i<=n;i++){
    for(j=1,k=1;j<=n;j++){
      
      while(k!=n+1){
	if(num[vertex[i]][k]==j){ 
	  printf("1 ");
	  frag=1;
	}	
	k++;
      }
      
      if(frag!=1) printf("0 ");
      else frag=0;
      k=1;
    }
    printf("\n");
  }
}