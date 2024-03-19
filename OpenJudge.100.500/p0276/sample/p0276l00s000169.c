#include<stdio.h>
int main(){
  int n,i,j,v,A[100][100],a,b;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=0;   
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d",&v);
      A[i][v-1] = 1;
    }
  }
    
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",A[i][j]);
      if(j < n-1) printf(" ");   
    }
    printf("\n");
  }
    return 0;
}