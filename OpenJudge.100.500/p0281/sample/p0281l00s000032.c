
#include<stdio.h>

void dijkstra();

int num,a[100][100];

int main(){
  int i,j,u,k,v,c;

  scanf("%d",&num);

  for(i = 0; i< num; i++){
    for(j = 0; j < num; j++){
      a[i][j] = 1000000;
    }
  }

  for(i = 0; i< num; i++){
    scanf("%d %d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d %d",&v,&c);
      a[u][v] = c;
    }
  }

  dijkstra();
  return 0;
}


void dijkstra(){

  int minv,i,u,v;
  int d[100],color[100];

  for(i = 0; i < num; i++){
    d[i] = 1000000;
    color[i] = 0;
  }

  d[0] = 0;
  color[0] = 1;

  while(1){
    minv = 1000000;
    u = -1;
    for(i = 0; i < num; i++){
      if(minv > d[i] && color[i] != 2){
	u  = i;
	minv = d[i];
      }
    }
    
    if(u == -1)break;
    color[u] = 2;

    for(v = 0; v < num; v++){
      if(color[v] != 2 && a[u][v] != 1000000){
	if(d[v] > d[u] + a[u][v]){
	  d[v] = d[u] + a[u][v];
	  color[v] = 1;
	}
      }
    }
  }

  for(i = 0; i < num; i++){
    printf("%d ",i);
    if(d[i] == 1000000)printf("-1");
    else printf("%d\n",d[i]);
  }
}