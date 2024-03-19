#include<stdio.h>

#define max 100
#define a 0
#define b 1
#define c 2
#define inf (1<<21)

int n, m[max][max];

void D(){
  int i, v, min;
  int d[max], ch[max];
  for(i=0 ; i<n ; i++){
  d[i]=inf;
  ch[i]=a;
  }
  d[0]=0;
  ch[0]=b;
  while(1){
    min=inf;
    int u=-1;
    for(i=0 ; i<n ; i++){
      if(min>d[i] && ch[i]!=c){
        u=i;
        min=d[i];
      }
    }
    if(u==-1)break;
    ch[u]=c;
    for(v=0 ; v<n ; v++){
      if(ch[v]!=c && m[u][v]!=inf){
        if(d[v]>d[u]+m[u][v]){
          d[v]=d[u]+m[u][v];
          ch[v]=b;
        }
      }
    }
  }
  for(i=0 ; i<n ; i++){
  if(d[i]!=inf)printf("%d %d\n", i, d[i]);
  else printf("%d -1\n",i);
  }
}

int main(){
  int i, j, u, k, v, num;
  scanf("%d", &n);
  for(i=0 ; i<n ; i++){
    for(j=0 ; j<n ; j++){
      m[i][j]=inf;
    }
  }
  for(i=0 ; i<n ; i++){
    scanf("%d%d", &u, &k);
    for(j=0 ; j<k ; j++){
      scanf("%d%d", &v, &num);
      m[u][v]=num;
    }
  }
  D();
  return 0;
}

