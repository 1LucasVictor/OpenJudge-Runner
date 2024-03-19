#include <stdio.h>
#define N 100

int main(){
  int m[N][N];
  int n,t,g,v;
  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)m[i][j]=0;
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&t,&g);
    t--;
    for(j=0;j<g;j++){
      scanf("%d",&v);
      v--;
      m[t][v]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j)printf(" ");
      printf("%d",m[i][j]);
     }
    printf("\n");
  }
  return 0;
}
    

