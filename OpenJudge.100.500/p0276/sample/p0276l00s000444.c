#include <stdio.h>
#define N 150

#define WHITE 0
#define BLACK 1

main()
{


  int n,i,j,a,b,c;
  int A[N][N];



  scanf("%d",&n);

  for(i = 1; i <= n; i++){
    scanf("%d%d",&a,&b);
    for(j = 1; j <= b; j++){
      scanf("%d",&c);
      A[a][c] = BLACK;
    }  
  }
  
  for(i = 1; i <= n; i++){
    for(j = 1; j < n; j++){
      printf("%d ",A[i][j]);
    }
    printf("%d\n",A[i][j]);
  }
  
  return 0;
}