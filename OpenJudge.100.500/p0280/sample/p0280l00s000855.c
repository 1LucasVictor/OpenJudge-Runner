#include<stdio.h>
#define MAX 100
#define INF 1e9

int Graf[MAX][MAX];
int d[MAX];
int p[MAX];

int min(int a,int b){
  if(a<b) return a;
  return b;
}

int prim(int n){
  int i,v,sum = 0;
  for(i = 0 ; i < n ; i++){
    d[i] = INF;
    p[i]= 0;
  }
   
  d[0] = 0;
  
  while(1){
    v = -1;
    for(i = 0 ; i < n ; i++){
      if(!p[i] && (v == -1 || d[i] < d[v])){
        v = i;
      }
    }
    if(v == -1)break; 
    p[v] = 1;
    sum += d[v];
    for(i = 0 ; i < n ; i++){
      if(Graf[v][i] == -1)continue;
      d[i] = min(d[i],Graf[v][i]);
    }
  }
  return sum;
}

int main(){
  int n,i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&Graf[i][j]);
    }
  }
  printf("%d\n",prim(n));
  return 0;
}