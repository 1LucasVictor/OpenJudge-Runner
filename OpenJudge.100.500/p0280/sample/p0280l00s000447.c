#include<stdio.h>

#define MAX  500
static const int INFTY = (1<<21);

int H[MAX],n,bbb=1;
int NOT(int k){
  int i;
  for(i=0;i<bbb;i++){
    if(H[i]==k)return 0;
  }
  return 1;
}

main(){
  int i, j, e, sum,min,k;
  int V[MAX][MAX];
  int M[MAX];
  int aaa=0;
  H[0]=0;
  int flag=0;

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      V[i][j] = (e==-1)?INFTY:e;
    }
  }
  i=0;
  while(i<n){
    min=INFTY;
    for(j=0;j<bbb;j++){
      for(k=0;k<n;k++){
	if(NOT(k) && V[H[j]][k]<min){
	  min=V[H[j]][k];
	  flag=k;
	}
      }
    }
    M[i]=min;
    H[bbb]=flag;
    bbb++;
    i++;
  }

  sum = 0;
  
  for ( i = 0; i < n-1; i++ ){
    sum+=M[i];
  }
  
  printf("%d\n",sum);
  
  return 0;
}