#include<stdio.h>
 


#define WHITE 1
#define BLACK 0
 
int main(){
 
  int d[100], color[100], w[100][100],i, j, v, c,n, u, k,min;
 
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j  < n; j++){
      w[i][j] = -1;
    }
  }
 
  for(i = 0; i < n; i++){
    scanf("%d %d",&u, &k);
    for(j = 0; j < k; j++){
      scanf("%d %d", &v, &c);   
      w[i][v] = c;
    }
  }
 
  for(i = 0; i < n; i++){
    d[i] = 1000000;
    color[i] = WHITE;
  }
 
  d[0] = 0;
   
  while(1){
    min =1000000;
    for(i = 0; i < n; i++){
      if(d[i] < min && color[i] ==WHITE){
        min = d[i];
        u = i;
      }
    }
     
    if(min == 1000000)break;
    color[u] = BLACK;
     
    for(v = 0; v < n; v++){
      if(w[u][v] == -1) continue;
      if(d[v] >  d[u] + w[u][v]) d[v] = d[u] + w[u][v];
    }
  }  
  for(i = 0; i < n; i++){
    printf("%d %d\n",i, d[i]);
  }
 
  return 0;
}