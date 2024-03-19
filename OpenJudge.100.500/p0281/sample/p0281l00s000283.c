#include <stdio.h>
#define MAX 100
#define INFTY 100000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
int n;
int M[MAX][MAX];
int d[MAX];

//void dijkstra(int n,int d[],int M[MAX][MAX]){                                 
void dijkstra(void){
  int color[MAX];
  // int d[MAX];                                                                
  int i,v,min;
  for(i=0;i<n;i++){
    d[i]=INFTY;
    color[i]=WHITE;
  }


  d[0]=0;
  color[0]=GRAY;

  while(1){
    v=-1;
    min=INFTY;
    for(i=0;i<n;i++){
      if(color[i] == GRAY && d[i] < min){
        min = d[i];
        v = i;
      }
    }
    if(v == -1)break;
    color[v] = BLACK;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && M[v][i] < INFTY){
        color[i] = GRAY;
        if(d[i] > (d[v] + M[v][i])){
          d[i] = (d[v]+M[v][i]);
        }

      }
    }
  }
  for(i=0;i<n;i++)printf("%d %d\n",i,d[i]);

}
int main(){
  int k,u,v,c,i,j;
  // int d[MAX],M[MAX][MAX];                                                    
  //int n;                                                                      
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=INFTY;
    }
  }


  // scanf("%d",&n);                                                            
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }
  }

  // dijkstra(n,d,M);                                                           
  dijkstra();
  /*  for(i=0;i<n;i++){                                                         
    printf("%d %d\n",i,d[i]);                                                   
    }*/
  return 0;
}
