#include <stdio.h>

#define Max 2000
#define Inf 100000000
#define NIL -1
#define WHITE 0
#define BLACK 1



int i, j, n, total = 0;
int matrix[Max][Max], d[Max], pi[Max], color[Max];


void prim(){

int u, v, mincost;

 for(u = 0 ; u <n ; u++){
   d[u] = Inf;
   pi[u] = NIL;
   color[u] =WHITE;
 }
 d[0] = 0;
 
 while(1){
   mincost = Inf;
   for(i = 0 ; i < n ; i++){
     if(color[i] != BLACK && d[i] < mincost){
       mincost = d[i];
       u = i;
     }
   }
   if( mincost == Inf)
     break;
   
   color[u] =BLACK;
   
   for(v = 0 ; v < n ; v++){
     if(matrix[u][v] == NIL)
       continue;
     else if(color[v] != BLACK && matrix[u][v] < d[v]){
       pi[v] = u;
       d[v] = matrix[u][v];      
     }
   }
 }
}


int main(){


  scanf("%d",&n);

  for( i = 0 ; i < n ; i++)
    for( j = 0 ; j < n ; j++)
      scanf("%d",&matrix[i][j]);
    
  prim();


  for( i = 0 ; i < n ; i++)
    total += d[i];
 
  printf("%d\n",total);

  return 0;
}
  