#include<stdio.h>

int adj[100][100];

int main(){
  int n,i,j,u,k,v;

  for(i = 0;i < 100;i++){
    for(j = 0;j < 100;j++){
      adj[i][j] = 0;
    }
  }

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%d %d",&u,&k);
    for(j = 0;j < k;j++){
      scanf("%d",&v);
      adj[i][v-1] = 1;
    }
  }

  for(i = 0;i < n;i++){
    for(j = 0;;){
      printf("%d",adj[i][j]);
      j++;
      if(j >= n)break;
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}