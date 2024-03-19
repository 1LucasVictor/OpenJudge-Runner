#include<stdio.h>
int main(void){
  int n,num,m,e,i,j,k;
  scanf("%d",&n);
  int x[n][n];
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      x[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d",&num); scanf("%d",&m); 
    for(j=0;j<m;j++){
      scanf("%d",&e);
      x[num-1][e-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",x[i][j]);
      if(j<n-1){
	printf(" ");
      }
    }
    putchar('\n');
  }
    return 0;
}
