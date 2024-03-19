#include <stdio.h>
 
int a[100][100], n;
 
void djk(){
  int minv, d[100], c[100], i, k, u;
 
  for(i = 0; i < n; i++){
    d[i] = 1000000;
    c[i] = 0;
  }
 
  d[0] = 0;
  c[0] = 1;
  while(1){
    minv = 1000000;
    u = -1;
    for(i = 0; i < n; i++){
      if(minv > d[i] && c[i] != 2){
    u = i;
    minv = d[i];
      }
    }
    if(u == -1) break;
    c[u] = 2;
    for(k = 0; k < n; k++){
      if(c[k] != 2 && a[u][k] != 1000000){
    if(d[k] > d[u] + a[u][k]){
      d[k] = d[u] + a[u][k];
      c[k] = 1;
    }
      }
    }
  }
  for(i = 0; i < n; i++){
    printf("%d ", i);
    if(d[i] != 1000000) printf("%d\n", d[i]);
  }
}
 
 
int main(){
  int i, j, u, k, v, c;
 
  scanf("%d", &n);
 
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      a[i][j] = 1000000;
    }
  }
   
  for(i = 0; i < n; i++){
    scanf("%d %d", &u, &k);
    for(j = 0; j < k; j++){
      scanf("%d %d", &v, &c);
      a[u][v] = c;
    }
  }
 
    djk();
 
  return 0;
}

