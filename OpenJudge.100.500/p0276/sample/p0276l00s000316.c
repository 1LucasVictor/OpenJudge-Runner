#include<stdio.h>
 
#define N 100
 
main(){
 
  int i,j,a,b,c,d;
  int Adj[N][N];
 
 scanf("%d",&a);
 
  for(i = 1; i <= a; i++){
    for(j = 1; j <= a; j++){
      Adj[i][j] = 0;
    }
  }
  for(i = 1; i <= a; i++){
    scanf("%d%d",&b,&c);
      for(j = 1; j <= c; j++){
    scanf("%d",&d);
    Adj[b][d] = 1;
      }
  }
 
  for(i = 1; i <= a; i++){
    for(j = 1; j <= a; j++){
      if(j == a) printf("%d\n",Adj[i][j]);
      else printf("%d ",Adj[i][j]);     
      }
  }
 
  return 0;
}