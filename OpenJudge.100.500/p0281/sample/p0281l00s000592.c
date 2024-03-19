#include <stdio.h>
int main(){
  int u,i,j,c,x,y,z,G[100][100],a[100],d[100];
 
  scanf("%d", &u);
  for(i = 0; i < u; i++){
    a[i] = 0;

    if(i == 0){
      d[i] = 0;
    }
    else d[i] = 150000;

    for(j = 0; j < u; j++){
      G[i][j] = -1;
    }
  }
 
  for(i = 0; i < u; i++){
    scanf("%d %d", &x, &y);
    for(j = 0; j < y; j++){
      scanf("%d", &z);
      scanf("%d", &G[x][z]);
    }
  }
 
  while(c != 150000){
    c = 150000;
    for(i = 0; i < u; i++){
      if(a[i] != 1 && d[i] < c){
        c = d[i];
        x = i;
      }
    }
 
    for(i = 0; i < u; i++){
      if(G[x][i] != -1 && a[i] != 1 && d[x] + G[x][i] < d[i])
        d[i] = d[x] + G[x][i];
    }
    a[x] = 1;
  }
 
  for(i = 0; i < u; i++){
    printf("%d %d\n", i, d[i]);
    }

  return 0;
}