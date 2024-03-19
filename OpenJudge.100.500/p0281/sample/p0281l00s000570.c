#include<stdio.h>
#define WHITE 0
#define BLUCK 1
#define INF 2000000000
#define NIL -1

void dijkstra(int,int);
void initializeSingleSource(int,int);
int matrix[100][100];
int d[100];
int pi[100];
int color[100];

int main(){

  int i,j,sumnode,nodenum,sumconnect,toconnect,weight;

  scanf("%d",&sumnode);

  for(i = 0; i < sumnode; i++){

    scanf("%d",&nodenum);
    scanf("%d",&sumconnect);

    for(j = 0; j < sumconnect; j++){

      scanf("%d",&toconnect);

      scanf("%d",&weight);

      matrix[i][toconnect] = weight;

    }
  }

  dijkstra(sumnode,0);

  return 0;

}


void initializeSingleSource(int sumnode, int start){

  int v;

  for(v = 0; v < sumnode; v++){

    d[v] = INF;

    pi[v] = NIL;

  }

  d[start] = 0;

}

void dijkstra(int sumnode, int start){

  int mincost,i,u,v,j;

  initializeSingleSource(sumnode,start);


  while(1){

    mincost = INF;
 
    for(i = 0; i < sumnode; i++){

      if(color[i] != BLUCK && d[i] < mincost){

	mincost = d[i];

	u = i; //?????¨????????????

      }

    }
      if(mincost == INF){

	break;

      }

      color[u] = BLUCK;

  
      for(v = 0; v < sumnode; v++){

	if(color[v] != BLUCK && matrix[u][v] != 0){

	  if(d[u] + matrix[u][v] < d[v]){

	    d[v] = matrix[u][v] + d[u];
	    pi[v] = u;

	  }

	}

      }

  }
  /*      for(i = 0; i < sumnode; i++){

	for(j = 0; j < sumnode; j++){

	printf("%d ",matrix[i][j]);

	}
	printf("\n");
	}*/


      for(i = 0; i < sumnode; i++){

	printf("%d %d\n",i,d[i]);

      }


}