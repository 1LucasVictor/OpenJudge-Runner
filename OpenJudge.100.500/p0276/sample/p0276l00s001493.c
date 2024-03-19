#include<stdio.h>

int main()
{
  int n,a,b,c,i,j,ori[101][101];
  
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++) ori[i][j]=0;
  }
  
  for(i=1;i<=n;i++){
    
    scanf("%d%d",&a,&b);
    
    for(j=1;j<=b;j++){
      scanf("%d",&c);
      ori[a][c]=1;
    }
    
  }

  for(i=1;i<=n;i++){
    
    for(j=1;j<=n;j++){
      if(j>1) printf(" ");
      printf("%d",ori[i][j]);
    }
    
    printf("\n");
  }
  
  return 0;
}
