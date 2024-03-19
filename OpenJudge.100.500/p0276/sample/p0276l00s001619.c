#include <stdio.h>

int main(){
  int n,n2,i,j,v,G[100][100],x;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j] = 0;
    }
  }
      
  for(i=0;i<n;i++){
    scanf("%d%d",&x,&n2);
    x--;
    for(j=0;j<n2;j++){
      scanf("%d",&v);
      v--;
      G[x][v] = 1;
    }
  }

   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j) printf(" ");
      printf("%d",G[i][j]);
    }
    printf("\n");
  }
   return 0;

}
