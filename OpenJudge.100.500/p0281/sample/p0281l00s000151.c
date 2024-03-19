#include <stdio.h>
#define Max 100
#define Inf 2147483647
#define w 0
#define x 1
#define z 2

int n, m[Max][Max];

void d(){
  int min;
  int d[Max],alpha[Max];
  int i;
  for(i = 0 ;i< n;i++){
    d[i] = Inf;
    alpha[i] = Inf;
  }
  d[0]=0;
  alpha[0]=x;
  int u;
  while(1){
    min = Inf;
    u = -1;
    for(i = 0;i<n;i++){
      if(min > d[i] && alpha[i] != z){
        u = i;
        min = d[i];
      }
    }
    if(u == -1)break;
    alpha[u] = z;
    for(i = 0;i<n;i++){
      if(alpha[i]!= z &&m[u][i] != Inf){
        if(d[i] > d[u] + m[u][i]){
          d[i] = d[u] + m[u][i];
        }
      }
    }
  }
  int v;
  for(i = 0 ;i< n;i++){
    v = d[i];
    if(d[i] == Inf) v = -1;
    printf("%d %d\n",i,v);
  }
}

int main(){
  scanf("%d",&n);
  int i,j;
  for(i = 0;i<n;i++){
    for(j = 0;j<n;j++){
      m[i][j] = Inf;
    }
  }
  int k,c,u,v;
  for(i = 0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j = 0;j<k;j++){
      scanf("%d %d",&v,&c);
      m[u][v] = c;
    }
  }
  d();
  return 0;
}