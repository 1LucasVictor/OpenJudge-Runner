#include <stdio.h>

int main(){
  int i,j,n,k,l,h,A[100][100];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&k,&l);
    for(j=0;j<l;j++){
      scanf("%d",&h);
      A[k-1][h-1]=1;
    }
  }

 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j>1)printf(" ");
      printf("%d",A[i][j]);
    }
    printf("\n");
  }

 return 0;
  
}

