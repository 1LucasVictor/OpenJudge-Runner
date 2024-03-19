#include <stdio.h>

int main(void)
{
  int N,i,j,n[1001][6];
  scanf("%d",&N);
  for(i=0;i<N;i++){
    for(j=0;j<3;j++){
      scanf("%d",&n[i][j]);
      n[i][j+3] = n[i][j];
    }
    for(j=0;j<3;j++)
      if(n[i][j]*n[i][j]==n[i][j+1]*n[i][j+1]+n[i][j+2]*n[i][j+2])
	break;
    if(j==3) puts("NO");
    else puts("YES");
  }
  return 0;
}