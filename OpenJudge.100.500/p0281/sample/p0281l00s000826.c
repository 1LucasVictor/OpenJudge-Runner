#include<stdio.h>

#define white 0
#define gray 1
#define black 2

int n,u,hai[100][100];

void dijkstra(void);

int main(){
  int i,j,k,v,c;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      hai[i][j] = 1000000;

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      hai[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}

void dijkstra(){
  int i,min,d[100],iro[100] = {0};

  for(i=0;i<n;i++)
    d[i] = 1000000;

  d[0] = 0;
  iro[0] = 1;

  while(1){
    min = 1000000;
    u = -1;
    for(i=0;i<n;i++)
      if(min > d[i] && iro[i] != 2){
	u = i;
	min = d[i];
      }
    if(u == -1)break;
    iro[u] = 2;
    for(i=0;i<n;i++)
      if(iro[i] != 2 && hai[u][i] != 1000000){
	if(d[i] > d[u] + hai[u][i]){
	  d[i] = d[u] + hai[u][i];
	  iro[i] = 1;
	}
      }
  }
  for(i=0;i<n;i++){
    if(d[i] == 1000000)printf("%d -1\n",i);
    else printf("%d %d\n",i,d[i]);
  }

}

