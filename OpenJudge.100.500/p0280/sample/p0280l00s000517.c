#include<stdio.h>

int main(){

  int i, j, n, count=0; 
  int G[101][101], c[101], d[101], p[101], min, I; 

  scanf("%d", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      scanf("%d", &G[i][j]);
    }
  }

  for(i=0; i<n; i++){
    c[i]=0;
    p[i]=-1;
    d[i]=2001;
  }

  d[0]=0;

  while(1){
    min=2001;
    for(i=0; i<n; i++){
      if(c[i] != 2 && d[i] < min){
	min=d[i];
	I=i;
      }
    }

    if(min == 2001) break;
    c[I]=2;
    for(i=0; i<n; i++){
      if(G[I][i] != -1 && c[i] != 2 && G[I][i] < d[i]){
	p[i]=I;
	d[i]=G[I][i];
	c[i]=1;
      }
    }
  }

  for(i=0; i<n; i++){
    if(p[i] != -1){
      count += G[i][p[i]];
    }
  }
  printf("%d\n", count);
  return 0;
}